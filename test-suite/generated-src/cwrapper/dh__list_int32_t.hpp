// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_containers.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "foo_containers_record.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__list_int32_t.h"

#ifdef __cplusplus
}
#endif
struct DjinniListInt32T {
    static djinni::Handle<DjinniObjectHandle> fromCpp(const std::vector<int32_t> & dc);
    static std::vector<int32_t> toCpp(djinni::Handle<DjinniObjectHandle> dh);
    static djinni::Handle<DjinniOptionalObjectHandle>fromCpp(std::experimental::optional<std::vector<int32_t>> dc);
    static std::experimental::optional<std::vector<int32_t>> toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh);
};