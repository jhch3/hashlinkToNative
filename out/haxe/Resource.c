﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

haxe__io__Bytes haxe_Resource_getBytes(String r0) {
	haxe__io__Bytes r12;
	haxe__$Resource r4;
	haxe___Resource__ResourceContent r7;
	vbyte *r8, *r9;
	varray *r3;
	int r1, r5, r6, r10, r11;
	r1 = 0;
	r4 = (haxe__$Resource)global$757;
	r3 = r4->content;
	label$3082$3:
	r6 = r3->size;
	if( r1 >= r6 ) goto label$3082$28;
	r7 = ((haxe___Resource__ResourceContent*)(r3 + 1))[r1];
	++r1;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->name;
	r5 = 0;
	if( r0 == NULL ) hl_null_access();
	r9 = r0->bytes;
	r6 = 0;
	r10 = r0->length;
	r11 = 1;
	r10 = r10 + r11;
	r11 = 1;
	r10 = r10 << r11;
	r5 = hl_bytes_compare(r8,r5,r9,r6,r10);
	r6 = 0;
	if( r5 != r6 ) goto label$3082$27;
	r12 = (haxe__io__Bytes)hl_alloc_obj(haxe__io__Bytes__val);
	r8 = r7->data;
	r5 = r7->dataLen;
	haxe_io_Bytes_new(r12,r8,r5);
	return r12;
	label$3082$27:
	goto label$3082$3;
	label$3082$28:
	r12 = NULL;
	return r12;
}

