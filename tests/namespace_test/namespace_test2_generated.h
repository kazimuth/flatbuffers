// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
#define FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_

#include "flatbuffers/flatbuffers.h"

#include "namespace_test1_generated.h"

namespace NamespaceA {

struct TableInFirstNS;

}  // namespace NamespaceA

namespace NamespaceC {

struct TableInC;

}  // namespace NamespaceC

namespace NamespaceA {

struct SecondTableInA;

struct TableInFirstNS FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_FOO_TABLE = 4,
    VT_FOO_ENUM = 6,
    VT_FOO_STRUCT = 8
  };
  const NamespaceA::NamespaceB::TableInNestedNS *foo_table() const { return GetPointer<const NamespaceA::NamespaceB::TableInNestedNS *>(VT_FOO_TABLE); }
  NamespaceA::NamespaceB::TableInNestedNS *mutable_foo_table() { return GetPointer<NamespaceA::NamespaceB::TableInNestedNS *>(VT_FOO_TABLE); }
  NamespaceA::NamespaceB::EnumInNestedNS foo_enum() const { return static_cast<NamespaceA::NamespaceB::EnumInNestedNS>(GetField<int8_t>(VT_FOO_ENUM, 0)); }
  bool mutate_foo_enum(NamespaceA::NamespaceB::EnumInNestedNS _foo_enum) { return SetField(VT_FOO_ENUM, static_cast<int8_t>(_foo_enum)); }
  const NamespaceA::NamespaceB::StructInNestedNS *foo_struct() const { return GetStruct<const NamespaceA::NamespaceB::StructInNestedNS *>(VT_FOO_STRUCT); }
  NamespaceA::NamespaceB::StructInNestedNS *mutable_foo_struct() { return GetStruct<NamespaceA::NamespaceB::StructInNestedNS *>(VT_FOO_STRUCT); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_FOO_TABLE) &&
           verifier.VerifyTable(foo_table()) &&
           VerifyField<int8_t>(verifier, VT_FOO_ENUM) &&
           VerifyField<NamespaceA::NamespaceB::StructInNestedNS>(verifier, VT_FOO_STRUCT) &&
           verifier.EndTable();
  }
};

struct TableInFirstNSBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_foo_table(flatbuffers::Offset<NamespaceA::NamespaceB::TableInNestedNS> foo_table) { fbb_.AddOffset(TableInFirstNS::VT_FOO_TABLE, foo_table); }
  void add_foo_enum(NamespaceA::NamespaceB::EnumInNestedNS foo_enum) { fbb_.AddElement<int8_t>(TableInFirstNS::VT_FOO_ENUM, static_cast<int8_t>(foo_enum), 0); }
  void add_foo_struct(const NamespaceA::NamespaceB::StructInNestedNS *foo_struct) { fbb_.AddStruct(TableInFirstNS::VT_FOO_STRUCT, foo_struct); }
  TableInFirstNSBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  TableInFirstNSBuilder &operator=(const TableInFirstNSBuilder &);
  flatbuffers::Offset<TableInFirstNS> Finish() {
    auto o = flatbuffers::Offset<TableInFirstNS>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<TableInFirstNS> CreateTableInFirstNS(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<NamespaceA::NamespaceB::TableInNestedNS> foo_table = 0,
   NamespaceA::NamespaceB::EnumInNestedNS foo_enum = NamespaceA::NamespaceB::EnumInNestedNS_A,
   const NamespaceA::NamespaceB::StructInNestedNS *foo_struct = 0) {
  TableInFirstNSBuilder builder_(_fbb);
  builder_.add_foo_struct(foo_struct);
  builder_.add_foo_table(foo_table);
  builder_.add_foo_enum(foo_enum);
  return builder_.Finish();
}

}  // namespace NamespaceA

namespace NamespaceC {

struct TableInC FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_REFER_TO_A1 = 4,
    VT_REFER_TO_A2 = 6
  };
  const NamespaceA::TableInFirstNS *refer_to_a1() const { return GetPointer<const NamespaceA::TableInFirstNS *>(VT_REFER_TO_A1); }
  NamespaceA::TableInFirstNS *mutable_refer_to_a1() { return GetPointer<NamespaceA::TableInFirstNS *>(VT_REFER_TO_A1); }
  const NamespaceA::SecondTableInA *refer_to_a2() const { return GetPointer<const NamespaceA::SecondTableInA *>(VT_REFER_TO_A2); }
  NamespaceA::SecondTableInA *mutable_refer_to_a2() { return GetPointer<NamespaceA::SecondTableInA *>(VT_REFER_TO_A2); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_REFER_TO_A1) &&
           verifier.VerifyTable(refer_to_a1()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_REFER_TO_A2) &&
           verifier.VerifyTable(refer_to_a2()) &&
           verifier.EndTable();
  }
};

struct TableInCBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_refer_to_a1(flatbuffers::Offset<NamespaceA::TableInFirstNS> refer_to_a1) { fbb_.AddOffset(TableInC::VT_REFER_TO_A1, refer_to_a1); }
  void add_refer_to_a2(flatbuffers::Offset<NamespaceA::SecondTableInA> refer_to_a2) { fbb_.AddOffset(TableInC::VT_REFER_TO_A2, refer_to_a2); }
  TableInCBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  TableInCBuilder &operator=(const TableInCBuilder &);
  flatbuffers::Offset<TableInC> Finish() {
    auto o = flatbuffers::Offset<TableInC>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<TableInC> CreateTableInC(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<NamespaceA::TableInFirstNS> refer_to_a1 = 0,
   flatbuffers::Offset<NamespaceA::SecondTableInA> refer_to_a2 = 0) {
  TableInCBuilder builder_(_fbb);
  builder_.add_refer_to_a2(refer_to_a2);
  builder_.add_refer_to_a1(refer_to_a1);
  return builder_.Finish();
}

}  // namespace NamespaceC

namespace NamespaceA {

struct SecondTableInA FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_REFER_TO_C = 4
  };
  const NamespaceC::TableInC *refer_to_c() const { return GetPointer<const NamespaceC::TableInC *>(VT_REFER_TO_C); }
  NamespaceC::TableInC *mutable_refer_to_c() { return GetPointer<NamespaceC::TableInC *>(VT_REFER_TO_C); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_REFER_TO_C) &&
           verifier.VerifyTable(refer_to_c()) &&
           verifier.EndTable();
  }
};

struct SecondTableInABuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_refer_to_c(flatbuffers::Offset<NamespaceC::TableInC> refer_to_c) { fbb_.AddOffset(SecondTableInA::VT_REFER_TO_C, refer_to_c); }
  SecondTableInABuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  SecondTableInABuilder &operator=(const SecondTableInABuilder &);
  flatbuffers::Offset<SecondTableInA> Finish() {
    auto o = flatbuffers::Offset<SecondTableInA>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<SecondTableInA> CreateSecondTableInA(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<NamespaceC::TableInC> refer_to_c = 0) {
  SecondTableInABuilder builder_(_fbb);
  builder_.add_refer_to_c(refer_to_c);
  return builder_.Finish();
}

}  // namespace NamespaceA

#endif  // FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
