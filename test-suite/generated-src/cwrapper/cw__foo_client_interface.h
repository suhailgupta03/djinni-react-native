// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_client_interface.djinni

#pragma once // python_cdef_ignore
#include <stdbool.h>  // python_cdef_ignore

#include <stdint.h> // python_cdef_ignore

struct DjinniWrapperFooClientInterface;
void foo_client_interface___wrapper_dec_ref(struct DjinniWrapperFooClientInterface * dh);
void foo_client_interface___wrapper_add_ref(struct DjinniWrapperFooClientInterface * dh);

void cw__foo_client_interface_set_record(struct DjinniWrapperFooClientInterface * djinni_this, struct DjinniRecordHandle * rec);

struct DjinniRecordHandle * cw__foo_client_interface_get_record(struct DjinniWrapperFooClientInterface * djinni_this);

void cw__foo_client_interface_set_extensible_record(struct DjinniWrapperFooClientInterface * djinni_this, struct DjinniRecordHandle * rec);

struct DjinniRecordHandle * cw__foo_client_interface_get_extensible_record(struct DjinniWrapperFooClientInterface * djinni_this);

int32_t cw__foo_client_interface_get_extensible_record_number2(struct DjinniWrapperFooClientInterface * djinni_this);

struct DjinniString * cw__foo_client_interface_get_extensible_record_string2(struct DjinniWrapperFooClientInterface * djinni_this);

struct DjinniWrapperFooClientInterface * cw__foo_client_interface_create(void);
