// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FBMETA_TABLES_H_
#define FLATBUFFERS_GENERATED_FBMETA_TABLES_H_

#include "flatbuffers/flatbuffers.h"

namespace Tables {

struct FB_Meta;

struct FB_Meta FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BLOB_FORMAT = 4,
    VT_BLOB_DATA = 6,
    VT_BLOB_SIZE = 8,
    VT_BLOB_DELETED = 10,
    VT_BLOB_ORIG_OFF = 12,
    VT_BLOB_ORIG_LEN = 14,
    VT_BLOB_COMPRESSION = 16
  };
  int32_t blob_format() const {
    return GetField<int32_t>(VT_BLOB_FORMAT, 0);
  }
  const flatbuffers::Vector<uint8_t> *blob_data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BLOB_DATA);
  }
  uint64_t blob_size() const {
    return GetField<uint64_t>(VT_BLOB_SIZE, 0);
  }
  bool blob_deleted() const {
    return GetField<uint8_t>(VT_BLOB_DELETED, 0) != 0;
  }
  uint64_t blob_orig_off() const {
    return GetField<uint64_t>(VT_BLOB_ORIG_OFF, 0);
  }
  uint64_t blob_orig_len() const {
    return GetField<uint64_t>(VT_BLOB_ORIG_LEN, 0);
  }
  int32_t blob_compression() const {
    return GetField<int32_t>(VT_BLOB_COMPRESSION, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_BLOB_FORMAT) &&
           VerifyOffset(verifier, VT_BLOB_DATA) &&
           verifier.VerifyVector(blob_data()) &&
           VerifyField<uint64_t>(verifier, VT_BLOB_SIZE) &&
           VerifyField<uint8_t>(verifier, VT_BLOB_DELETED) &&
           VerifyField<uint64_t>(verifier, VT_BLOB_ORIG_OFF) &&
           VerifyField<uint64_t>(verifier, VT_BLOB_ORIG_LEN) &&
           VerifyField<int32_t>(verifier, VT_BLOB_COMPRESSION) &&
           verifier.EndTable();
  }
};

struct FB_MetaBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_blob_format(int32_t blob_format) {
    fbb_.AddElement<int32_t>(FB_Meta::VT_BLOB_FORMAT, blob_format, 0);
  }
  void add_blob_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> blob_data) {
    fbb_.AddOffset(FB_Meta::VT_BLOB_DATA, blob_data);
  }
  void add_blob_size(uint64_t blob_size) {
    fbb_.AddElement<uint64_t>(FB_Meta::VT_BLOB_SIZE, blob_size, 0);
  }
  void add_blob_deleted(bool blob_deleted) {
    fbb_.AddElement<uint8_t>(FB_Meta::VT_BLOB_DELETED, static_cast<uint8_t>(blob_deleted), 0);
  }
  void add_blob_orig_off(uint64_t blob_orig_off) {
    fbb_.AddElement<uint64_t>(FB_Meta::VT_BLOB_ORIG_OFF, blob_orig_off, 0);
  }
  void add_blob_orig_len(uint64_t blob_orig_len) {
    fbb_.AddElement<uint64_t>(FB_Meta::VT_BLOB_ORIG_LEN, blob_orig_len, 0);
  }
  void add_blob_compression(int32_t blob_compression) {
    fbb_.AddElement<int32_t>(FB_Meta::VT_BLOB_COMPRESSION, blob_compression, 0);
  }
  explicit FB_MetaBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FB_MetaBuilder &operator=(const FB_MetaBuilder &);
  flatbuffers::Offset<FB_Meta> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FB_Meta>(end);
    return o;
  }
};

inline flatbuffers::Offset<FB_Meta> CreateFB_Meta(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t blob_format = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> blob_data = 0,
    uint64_t blob_size = 0,
    bool blob_deleted = false,
    uint64_t blob_orig_off = 0,
    uint64_t blob_orig_len = 0,
    int32_t blob_compression = 0) {
  FB_MetaBuilder builder_(_fbb);
  builder_.add_blob_orig_len(blob_orig_len);
  builder_.add_blob_orig_off(blob_orig_off);
  builder_.add_blob_size(blob_size);
  builder_.add_blob_compression(blob_compression);
  builder_.add_blob_data(blob_data);
  builder_.add_blob_format(blob_format);
  builder_.add_blob_deleted(blob_deleted);
  return builder_.Finish();
}

inline flatbuffers::Offset<FB_Meta> CreateFB_MetaDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t blob_format = 0,
    const std::vector<uint8_t> *blob_data = nullptr,
    uint64_t blob_size = 0,
    bool blob_deleted = false,
    uint64_t blob_orig_off = 0,
    uint64_t blob_orig_len = 0,
    int32_t blob_compression = 0) {
  auto blob_data__ = blob_data ? _fbb.CreateVector<uint8_t>(*blob_data) : 0;
  return Tables::CreateFB_Meta(
      _fbb,
      blob_format,
      blob_data__,
      blob_size,
      blob_deleted,
      blob_orig_off,
      blob_orig_len,
      blob_compression);
}

inline const Tables::FB_Meta *GetFB_Meta(const void *buf) {
  return flatbuffers::GetRoot<Tables::FB_Meta>(buf);
}

inline const Tables::FB_Meta *GetSizePrefixedFB_Meta(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Tables::FB_Meta>(buf);
}

inline bool VerifyFB_MetaBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Tables::FB_Meta>(nullptr);
}

inline bool VerifySizePrefixedFB_MetaBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Tables::FB_Meta>(nullptr);
}

inline void FinishFB_MetaBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Tables::FB_Meta> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedFB_MetaBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Tables::FB_Meta> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Tables

#endif  // FLATBUFFERS_GENERATED_FBMETA_TABLES_H_
