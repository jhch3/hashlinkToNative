﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

haxe__io__Bytes haxe_crypto_BaseCode_encodeBytes(haxe__crypto__BaseCode r0,haxe__io__Bytes r1) {
	haxe__io__Bytes r4, r7;
	double r5, r9;
	int r2, r6, r8, r10, r11, r12, r13, r14, r15, r16;
	r2 = r0->nbits;
	r4 = r0->base;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	r8 = 8;
	r6 = r6 * r8;
	r5 = (double)r6;
	r9 = (double)r2;
	r5 = r5 / r9;
	r6 = (int)r5;
	r10 = r1->length;
	r11 = 8;
	r10 = r10 * r11;
	r10 = r2 == 0 ? 0 : r10 % r2;
	r11 = 0;
	if( r10 != r11 ) goto label$3103$18;
	r10 = 0;
	goto label$3103$19;
	label$3103$18:
	r10 = 1;
	label$3103$19:
	r8 = r6 + r10;
	r7 = haxe_io_Bytes_alloc(r8);
	r8 = 0;
	r10 = 0;
	r11 = 1;
	r11 = r11 << r2;
	r12 = 1;
	r11 = r11 - r12;
	r12 = 0;
	r13 = 0;
	label$3103$29:
	if( r13 >= r6 ) goto label$3103$56;
	label$3103$31:
	if( r10 >= r2 ) goto label$3103$45;
	r15 = 8;
	r14 = r10 + r15;
	r10 = r14;
	r15 = 8;
	r14 = r8 << r15;
	if( r1 == NULL ) hl_null_access();
	r15 = r12;
	++r12;
	r15 = haxe_io_Bytes_get(r1,r15);
	r14 = r14 | r15;
	r8 = r14;
	goto label$3103$31;
	label$3103$45:
	r14 = r10 - r2;
	r10 = r14;
	if( r7 == NULL ) hl_null_access();
	r14 = r13;
	++r13;
	if( r4 == NULL ) hl_null_access();
	r15 = r8 >> r10;
	r15 = r15 & r11;
	r15 = haxe_io_Bytes_get(r4,r15);
	haxe_io_Bytes_set(r7,r14,r15);
	goto label$3103$29;
	label$3103$56:
	r15 = 0;
	if( r15 >= r10 ) goto label$3103$67;
	if( r7 == NULL ) hl_null_access();
	r14 = r13;
	++r13;
	if( r4 == NULL ) hl_null_access();
	r16 = r2 - r10;
	r15 = r8 << r16;
	r15 = r15 & r11;
	r15 = haxe_io_Bytes_get(r4,r15);
	haxe_io_Bytes_set(r7,r14,r15);
	label$3103$67:
	return r7;
}

void haxe_crypto_BaseCode_initTable(haxe__crypto__BaseCode r0) {
	haxe__io__Bytes r8;
	hl__types__ArrayBytes_Int r1;
	vbyte *r7;
	int r3, r4, r5, r6, r9;
	r1 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r1);
	r3 = 0;
	label$3104$3:
	r5 = 256;
	if( r3 >= r5 ) goto label$3104$18;
	if( r1 == NULL ) hl_null_access();
	r4 = r3;
	++r3;
	r5 = -1;
	r6 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r6) ) goto label$3104$13;
	hl_types_ArrayBytes_Int___expand(r1,r4);
	label$3104$13:
	r7 = r1->bytes;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r7 + r6) = r5;
	goto label$3104$3;
	label$3104$18:
	r3 = 0;
	r8 = r0->base;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->length;
	label$3104$22:
	if( r3 >= r4 ) goto label$3104$38;
	r5 = r3;
	++r3;
	if( r1 == NULL ) hl_null_access();
	r8 = r0->base;
	if( r8 == NULL ) hl_null_access();
	r6 = haxe_io_Bytes_get(r8,r5);
	r9 = r1->length;
	if( ((unsigned)r6) < ((unsigned)r9) ) goto label$3104$33;
	hl_types_ArrayBytes_Int___expand(r1,r6);
	label$3104$33:
	r7 = r1->bytes;
	r9 = 2;
	r9 = r6 << r9;
	*(int*)(r7 + r9) = r5;
	goto label$3104$22;
	label$3104$38:
	r0->tbl = r1;
	return;
}

haxe__io__Bytes haxe_crypto_BaseCode_decodeBytes(haxe__crypto__BaseCode r0,haxe__io__Bytes r1) {
	String r15;
	haxe__io__Bytes r6;
	hl__types__ArrayBytes_Int r4;
	vbyte *r13;
	int r2, r5, r7, r8, r9, r10, r11, r12, r14;
	r2 = r0->nbits;
	r4 = r0->tbl;
	if( r4 ) goto label$3105$4;
	haxe_crypto_BaseCode_initTable(r0);
	label$3105$4:
	r4 = r0->tbl;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r5 = r5 * r2;
	r7 = 3;
	r5 = r5 >> r7;
	r6 = haxe_io_Bytes_alloc(r5);
	r7 = 0;
	r8 = 0;
	r9 = 0;
	r10 = 0;
	label$3105$15:
	if( r10 >= r5 ) goto label$3105$55;
	label$3105$17:
	r12 = 8;
	if( r8 >= r12 ) goto label$3105$44;
	r11 = r8 + r2;
	r8 = r11;
	r11 = r7 << r2;
	r7 = r11;
	if( r4 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r11 = r9;
	++r9;
	r11 = haxe_io_Bytes_get(r1,r11);
	r12 = r4->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$3105$33;
	r11 = 0;
	goto label$3105$37;
	label$3105$33:
	r13 = r4->bytes;
	r12 = 2;
	r12 = r11 << r12;
	r11 = *(int*)(r13 + r12);
	label$3105$37:
	r14 = -1;
	if( r11 != r14 ) goto label$3105$41;
	r15 = (String)global$816;
	hl_throw((vdynamic*)r15);
	label$3105$41:
	r12 = r7 | r11;
	r7 = r12;
	goto label$3105$17;
	label$3105$44:
	r12 = 8;
	r11 = r8 - r12;
	r8 = r11;
	if( r6 == NULL ) hl_null_access();
	r11 = r10;
	++r10;
	r12 = r7 >> r8;
	r14 = 255;
	r12 = r12 & r14;
	haxe_io_Bytes_set(r6,r11,r12);
	goto label$3105$15;
	label$3105$55:
	return r6;
}

void haxe_crypto_BaseCode_new(haxe__crypto__BaseCode r0,haxe__io__Bytes r1) {
	String r6;
	int r2, r4, r5;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->length;
	r4 = 1;
	label$3106$3:
	r5 = 1;
	r5 = r5 << r4;
	if( r5 >= r2 ) goto label$3106$9;
	++r4;
	goto label$3106$3;
	label$3106$9:
	r5 = 8;
	if( r5 < r4 ) goto label$3106$14;
	r5 = 1;
	r5 = r5 << r4;
	if( r2 == r5 ) goto label$3106$16;
	label$3106$14:
	r6 = (String)global$815;
	hl_throw((vdynamic*)r6);
	label$3106$16:
	r0->base = r1;
	r0->nbits = r4;
	return;
}

