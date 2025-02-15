﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void haxe_ds_StringMap_set(haxe__ds__StringMap r0,String r1,vdynamic* r2) {
	hl_bytes_map *r4;
	vbyte *r5;
	r4 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	hl_hbset(r4,r5,r2);
	return;
}

vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap r0,String r1) {
	hl_bytes_map *r3;
	vdynamic *r2;
	vbyte *r4;
	if( r1 ) goto label$892$3;
	r2 = NULL;
	return r2;
	label$892$3:
	r3 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r2 = hl_hbget(r3,r4);
	return r2;
}

bool haxe_ds_StringMap_exists(haxe__ds__StringMap r0,String r1) {
	bool r2;
	hl_bytes_map *r3;
	vbyte *r4;
	if( r1 ) goto label$893$3;
	r2 = false;
	return r2;
	label$893$3:
	r3 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r2 = hl_hbexists(r3,r4);
	return r2;
}

bool haxe_ds_StringMap_remove(haxe__ds__StringMap r0,String r1) {
	bool r2;
	hl_bytes_map *r3;
	vbyte *r4;
	if( r1 ) goto label$894$3;
	r2 = false;
	return r2;
	label$894$3:
	r3 = r0->h;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r2 = hl_hbremove(r3,r4);
	return r2;
}

vdynamic* haxe_ds_StringMap_keys(haxe__ds__StringMap r0) {
	hl_bytes_map *r2;
	haxe__ds___StringMap__StringMapKeysIterator r1;
	r1 = (haxe__ds___StringMap__StringMapKeysIterator)hl_alloc_obj(haxe__ds___StringMap__StringMapKeysIterator__val);
	r2 = r0->h;
	haxe_ds__StringMap_StringMapKeysIterator_new(r1,r2);
	return ((vdynamic*)r1);
}

vdynamic* haxe_ds_StringMap_iterator(haxe__ds__StringMap r0) {
	hl_bytes_map *r3;
	hl__NativeArrayIterator_Dynamic r1;
	varray *r2;
	r1 = (hl__NativeArrayIterator_Dynamic)hl_alloc_obj(hl__NativeArrayIterator_Dynamic__val);
	r3 = r0->h;
	r2 = hl_hbvalues(r3);
	hl_NativeArrayIterator_Dynamic_new(r1,r2);
	return ((vdynamic*)r1);
}

void haxe_ds_StringMap_new(haxe__ds__StringMap r0) {
	hl_bytes_map *r1;
	r1 = hl_hballoc();
	r0->h = r1;
	return;
}

