﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool hxd_impl_ArrayIterator_h2d_Object_hasNext(hxd__impl__ArrayIterator_h2d_Object r0) {
	bool r1;
	int r2, r3;
	r2 = r0->i;
	r3 = r0->l;
	if( r2 < r3 ) goto label$2355$5;
	r1 = false;
	goto label$2355$6;
	label$2355$5:
	r1 = true;
	label$2355$6:
	return r1;
}

h2d__Object hxd_impl_ArrayIterator_h2d_Object_next(hxd__impl__ArrayIterator_h2d_Object r0) {
	hl__types__ArrayObj r1;
	h2d__Object r4;
	vdynamic *r5;
	varray *r6;
	int r2, r3;
	r1 = r0->a;
	if( r1 == NULL ) hl_null_access();
	r2 = r0->i;
	r3 = r2;
	++r2;
	r0->i = r2;
	r2 = r1->length;
	if( ((unsigned)r3) < ((unsigned)r2) ) goto label$2356$10;
	r4 = NULL;
	goto label$2356$13;
	label$2356$10:
	r6 = r1->array;
	r5 = ((vdynamic**)(r6 + 1))[r3];
	r4 = (h2d__Object)r5;
	label$2356$13:
	return r4;
}

void hxd_impl_ArrayIterator_h2d_Object_new(hxd__impl__ArrayIterator_h2d_Object r0,hl__types__ArrayObj r1) {
	hl__types__ArrayObj r3;
	int r2;
	r2 = 0;
	r0->i = r2;
	r0->a = r1;
	r3 = r0->a;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r0->l = r2;
	return;
}

