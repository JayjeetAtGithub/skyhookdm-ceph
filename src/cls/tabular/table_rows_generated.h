// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TABLEROWS_TABLES_H_
#define FLATBUFFERS_GENERATED_TABLEROWS_TABLES_H_

#include "flatbuffers/flatbuffers.h"

namespace Tables {

struct Table;

struct Table FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SKYHOOK_VERSION = 4,
    VT_SCHEMA_VERSION = 6,
    VT_TABLE_NAME = 8,
    VT_SCHEMA = 10,
    VT_NROWS = 12,
    VT_NCOLS = 14,
    VT_LAYOUT = 16,
    VT_RIDS = 18,
    VT_ATT0 = 20,
    VT_ATT1 = 22
  };
  uint8_t skyhook_version() const {
    return GetField<uint8_t>(VT_SKYHOOK_VERSION, 0);
  }
  uint8_t schema_version() const {
    return GetField<uint8_t>(VT_SCHEMA_VERSION, 0);
  }
  const flatbuffers::String *table_name() const {
    return GetPointer<const flatbuffers::String *>(VT_TABLE_NAME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *schema() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_SCHEMA);
  }
  uint64_t nrows() const {
    return GetField<uint64_t>(VT_NROWS, 0);
  }
  uint64_t ncols() const {
    return GetField<uint64_t>(VT_NCOLS, 0);
  }
  const flatbuffers::String *layout() const {
    return GetPointer<const flatbuffers::String *>(VT_LAYOUT);
  }
  const flatbuffers::Vector<uint64_t> *RIDs() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_RIDS);
  }
  const flatbuffers::Vector<uint64_t> *att0() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_ATT0);
  }
  const flatbuffers::Vector<float> *att1() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_ATT1);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SKYHOOK_VERSION) &&
           VerifyField<uint8_t>(verifier, VT_SCHEMA_VERSION) &&
           VerifyOffset(verifier, VT_TABLE_NAME) &&
           verifier.VerifyString(table_name()) &&
           VerifyOffset(verifier, VT_SCHEMA) &&
           verifier.VerifyVector(schema()) &&
           verifier.VerifyVectorOfStrings(schema()) &&
           VerifyField<uint64_t>(verifier, VT_NROWS) &&
           VerifyField<uint64_t>(verifier, VT_NCOLS) &&
           VerifyOffset(verifier, VT_LAYOUT) &&
           verifier.VerifyString(layout()) &&
           VerifyOffset(verifier, VT_RIDS) &&
           verifier.VerifyVector(RIDs()) &&
           VerifyOffset(verifier, VT_ATT0) &&
           verifier.VerifyVector(att0()) &&
           VerifyOffset(verifier, VT_ATT1) &&
           verifier.VerifyVector(att1()) &&
           verifier.EndTable();
  }
};

struct TableBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_skyhook_version(uint8_t skyhook_version) {
    fbb_.AddElement<uint8_t>(Table::VT_SKYHOOK_VERSION, skyhook_version, 0);
  }
  void add_schema_version(uint8_t schema_version) {
    fbb_.AddElement<uint8_t>(Table::VT_SCHEMA_VERSION, schema_version, 0);
  }
  void add_table_name(flatbuffers::Offset<flatbuffers::String> table_name) {
    fbb_.AddOffset(Table::VT_TABLE_NAME, table_name);
  }
  void add_schema(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> schema) {
    fbb_.AddOffset(Table::VT_SCHEMA, schema);
  }
  void add_nrows(uint64_t nrows) {
    fbb_.AddElement<uint64_t>(Table::VT_NROWS, nrows, 0);
  }
  void add_ncols(uint64_t ncols) {
    fbb_.AddElement<uint64_t>(Table::VT_NCOLS, ncols, 0);
  }
  void add_layout(flatbuffers::Offset<flatbuffers::String> layout) {
    fbb_.AddOffset(Table::VT_LAYOUT, layout);
  }
  void add_RIDs(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> RIDs) {
    fbb_.AddOffset(Table::VT_RIDS, RIDs);
  }
  void add_att0(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> att0) {
    fbb_.AddOffset(Table::VT_ATT0, att0);
  }
  void add_att1(flatbuffers::Offset<flatbuffers::Vector<float>> att1) {
    fbb_.AddOffset(Table::VT_ATT1, att1);
  }
  explicit TableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TableBuilder &operator=(const TableBuilder &);
  flatbuffers::Offset<Table> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Table>(end);
    return o;
  }
};

inline flatbuffers::Offset<Table> CreateTable(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t skyhook_version = 0,
    uint8_t schema_version = 0,
    flatbuffers::Offset<flatbuffers::String> table_name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> schema = 0,
    uint64_t nrows = 0,
    uint64_t ncols = 0,
    flatbuffers::Offset<flatbuffers::String> layout = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> RIDs = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> att0 = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> att1 = 0) {
  TableBuilder builder_(_fbb);
  builder_.add_ncols(ncols);
  builder_.add_nrows(nrows);
  builder_.add_att1(att1);
  builder_.add_att0(att0);
  builder_.add_RIDs(RIDs);
  builder_.add_layout(layout);
  builder_.add_schema(schema);
  builder_.add_table_name(table_name);
  builder_.add_schema_version(schema_version);
  builder_.add_skyhook_version(skyhook_version);
  return builder_.Finish();
}

inline flatbuffers::Offset<Table> CreateTableDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t skyhook_version = 0,
    uint8_t schema_version = 0,
    const char *table_name = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *schema = nullptr,
    uint64_t nrows = 0,
    uint64_t ncols = 0,
    const char *layout = nullptr,
    const std::vector<uint64_t> *RIDs = nullptr,
    const std::vector<uint64_t> *att0 = nullptr,
    const std::vector<float> *att1 = nullptr) {
  auto table_name__ = table_name ? _fbb.CreateString(table_name) : 0;
  auto schema__ = schema ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*schema) : 0;
  auto layout__ = layout ? _fbb.CreateString(layout) : 0;
  auto RIDs__ = RIDs ? _fbb.CreateVector<uint64_t>(*RIDs) : 0;
  auto att0__ = att0 ? _fbb.CreateVector<uint64_t>(*att0) : 0;
  auto att1__ = att1 ? _fbb.CreateVector<float>(*att1) : 0;
  return Tables::CreateTable(
      _fbb,
      skyhook_version,
      schema_version,
      table_name__,
      schema__,
      nrows,
      ncols,
      layout__,
      RIDs__,
      att0__,
      att1__);
}

inline const Tables::Table *GetTable(const void *buf) {
  return flatbuffers::GetRoot<Tables::Table>(buf);
}

inline const Tables::Table *GetSizePrefixedTable(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Tables::Table>(buf);
}

inline bool VerifyTableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Tables::Table>(nullptr);
}

inline bool VerifySizePrefixedTableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Tables::Table>(nullptr);
}

inline void FinishTableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Tables::Table> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Tables::Table> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Tables

#endif  // FLATBUFFERS_GENERATED_TABLEROWS_TABLES_H_
