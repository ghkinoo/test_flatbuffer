#include <iostream>
#include "test_fb_generated.h"

int main() {
    auto testBinary = "test_fb.test";
    auto testFile = fopen(testBinary, "rb");
    uint32_t testBufferSize;
    fread(&testBufferSize, sizeof(uint32_t), 1, testFile);
    auto testBuffer = std::unique_ptr<uint8_t[]>(new uint8_t[testBufferSize]);
    fread(testBuffer.get(), sizeof(uint8_t), testBufferSize, testFile);
    fclose(testFile);

    auto verifier = flatbuffers::Verifier(
        testBuffer.get(),
        testBufferSize,
        flatbuffers::Verifier::Options{.check_alignment = false, .assert = false}
    );
    if (!VerifyTestRootBuffer(verifier)) {
        std::cout << "Failed to verify buffer" << std::endl;
        return 1;
    }

    auto testRoot = GetTestRoot(testBuffer.get());
    std::cout << "Successfully verified buffer: " << testRoot->tests()->Get(0)->test_long() << std::endl;

    auto verifierWithAlign = flatbuffers::Verifier(
        testBuffer.get(),
        testBufferSize,
        flatbuffers::Verifier::Options{.check_alignment = true, .assert = false}
    );
    if (!VerifyTestRootBuffer(verifierWithAlign)) {
        std::cout << "Failed to verify buffer (alignment)" << std::endl;
        return 1;
    }

    testRoot = GetTestRoot(testBuffer.get());
    std::cout << "Successfully verified buffer (alignment): " << testRoot->tests()->Get(0)->test_long() << std::endl;

    return 0;
}
