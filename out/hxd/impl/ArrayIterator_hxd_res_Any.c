﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool hxd_impl_ArrayIterator_hxd_res_Any_hasNext(hxd__impl__ArrayIterator_hxd_res_Any r0) {
	bool r1;
	int r2, r3;
	r2 = r0->i;
	r3 = r0->l;
	if( r2 < r3 ) goto label$3605$5;
	r1 = false;
	goto label$3605$6;
	label$3605$5:
	r1 = true;
	label$3605$6:
	return r1;
}

hxd__res__Any hxd_impl_ArrayIterator_hxd_res_Any_next(hxd__impl__ArrayIterator_hxd_res_Any r0) {
	hl__types__ArrayObj r1;
	vdynamic *r5;
	varray *r6;
	hxd__res__Any r4;
	int r2, r3;
	r1 = r0->a;
	if( r1 == NULL ) hl_null_access();
	r2 = r0->i;
	r3 = r2;
	++r2;
	r0->i = r2;
	r2 = r1->length;
	if( ((unsigned)r3) < ((unsigned)r2) ) goto label$3606$10;
	r4 = NULL;
	goto label$3606$13;
	label$3606$10:
	r6 = r1->array;
	r5 = ((vdynamic**)(r6 + 1))[r3];
	r4 = (hxd__res__Any)r5;
	label$3606$13:
	return r4;
}

void hxd_impl_ArrayIterator_hxd_res_Any_new(hxd__impl__ArrayIterator_hxd_res_Any r0,hl__types__ArrayObj r1) {
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

