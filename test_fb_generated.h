// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TESTFB_H_
#define FLATBUFFERS_GENERATED_TESTFB_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 12 &&
              FLATBUFFERS_VERSION_REVISION == 23,
             "Non-compatible flatbuffers version included");

struct TestTable;
struct TestTableBuilder;

struct TestRoot;
struct TestRootBuilder;

struct TestTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TestTableBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEST_ID = 4,
    VT_TEST_LONG = 6
  };
  const ::flatbuffers::String *test_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_TEST_ID);
  }
  int64_t test_long() const {
    return GetField<int64_t>(VT_TEST_LONG, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TEST_ID) &&
           verifier.VerifyString(test_id()) &&
           VerifyField<int64_t>(verifier, VT_TEST_LONG, 8) &&
           verifier.EndTable();
  }
};

struct TestTableBuilder {
  typedef TestTable Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_test_id(::flatbuffers::Offset<::flatbuffers::String> test_id) {
    fbb_.AddOffset(TestTable::VT_TEST_ID, test_id);
  }
  void add_test_long(int64_t test_long) {
    fbb_.AddElement<int64_t>(TestTable::VT_TEST_LONG, test_long, 0);
  }
  explicit TestTableBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TestTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TestTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TestTable> CreateTestTable(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> test_id = 0,
    int64_t test_long = 0) {
  TestTableBuilder builder_(_fbb);
  builder_.add_test_long(test_long);
  builder_.add_test_id(test_id);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TestTable> CreateTestTableDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *test_id = nullptr,
    int64_t test_long = 0) {
  auto test_id__ = test_id ? _fbb.CreateString(test_id) : 0;
  return CreateTestTable(
      _fbb,
      test_id__,
      test_long);
}

struct TestRoot FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TestRootBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TESTS = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<TestTable>> *tests() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<TestTable>> *>(VT_TESTS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TESTS) &&
           verifier.VerifyVector(tests()) &&
           verifier.VerifyVectorOfTables(tests()) &&
           verifier.EndTable();
  }
};

struct TestRootBuilder {
  typedef TestRoot Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_tests(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<TestTable>>> tests) {
    fbb_.AddOffset(TestRoot::VT_TESTS, tests);
  }
  explicit TestRootBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TestRoot> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TestRoot>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TestRoot> CreateTestRoot(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<TestTable>>> tests = 0) {
  TestRootBuilder builder_(_fbb);
  builder_.add_tests(tests);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TestRoot> CreateTestRootDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<TestTable>> *tests = nullptr) {
  auto tests__ = tests ? _fbb.CreateVector<::flatbuffers::Offset<TestTable>>(*tests) : 0;
  return CreateTestRoot(
      _fbb,
      tests__);
}

inline const TestRoot *GetTestRoot(const void *buf) {
  return ::flatbuffers::GetRoot<TestRoot>(buf);
}

inline const TestRoot *GetSizePrefixedTestRoot(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<TestRoot>(buf);
}

inline const char *TestRootIdentifier() {
  return "TEST";
}

inline bool TestRootBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, TestRootIdentifier());
}

inline bool SizePrefixedTestRootBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, TestRootIdentifier(), true);
}

inline bool VerifyTestRootBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<TestRoot>(TestRootIdentifier());
}

inline bool VerifySizePrefixedTestRootBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<TestRoot>(TestRootIdentifier());
}

inline const char *TestRootExtension() {
  return "test";
}

inline void FinishTestRootBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<TestRoot> root) {
  fbb.Finish(root, TestRootIdentifier());
}

inline void FinishSizePrefixedTestRootBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<TestRoot> root) {
  fbb.FinishSizePrefixed(root, TestRootIdentifier());
}

#endif  // FLATBUFFERS_GENERATED_TESTFB_H_
