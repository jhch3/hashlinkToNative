﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

hl__types__ArrayBytes_hl_UI16 hl_types_ArrayBytes_hl_UI16_concat(hl__types__ArrayBytes_hl_UI16 r0,hl__types__ArrayBytes_hl_UI16 r1) {
	hl__types__ArrayBytes_hl_UI16 r2;
	vbyte *r6, *r7, *r8, *r9, *r12;
	int r4, r5, r10, r11, r13;
	r2 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r2);
	r4 = r0->length;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r4 + r5;
	r2->size = r4;
	r2->length = r4;
	r6 = r0->bytes;
	r4 = r2->length;
	r5 = 1;
	r4 = r4 << r5;
	r7 = hl_alloc_bytes(r4);
	r2->bytes = r7;
	r7 = r0->bytes;
	r4 = r0->length;
	r5 = 1;
	r4 = r4 << r5;
	r8 = r2->bytes;
	r5 = 0;
	r9 = r0->bytes;
	r10 = 0;
	hl_bytes_blit(r8,r5,r9,r10,r4);
	r8 = r0->bytes;
	r9 = r2->bytes;
	r12 = r1->bytes;
	r10 = 0;
	r11 = r1->length;
	r13 = 1;
	r11 = r11 << r13;
	hl_bytes_blit(r9,r4,r12,r10,r11);
	return r2;
}

String hl_types_ArrayBytes_hl_UI16_join(hl__types__ArrayBytes_hl_UI16 r0,String r1) {
	String r9;
	unsigned short r11;
	StringBuf r2;
	vdynamic *r12;
	vbyte *r10;
	int r4, r5, r6, r7, r8;
	r2 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$163$4:
	if( r4 >= r5 ) goto label$163$21;
	r6 = r4;
	++r4;
	r8 = 0;
	if( r8 >= r6 ) goto label$163$12;
	if( r2 == NULL ) hl_null_access();
	StringBuf_add(r2,((vdynamic*)r1));
	label$163$12:
	r10 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r8 = 1;
	r8 = r6 << r8;
	r7 = *(unsigned short*)(r10 + r8);
	r11 = (int)r7;
	r12 = hl_alloc_dynamic(&type$2);
	r12->v.i = r11;
	StringBuf_add(r2,((vdynamic*)r12));
	goto label$163$4;
	label$163$21:
	if( r2 == NULL ) hl_null_access();
	r9 = StringBuf_toString(r2);
	return r9;
}

vdynamic* hl_types_ArrayBytes_hl_UI16_pop(hl__types__ArrayBytes_hl_UI16 r0) {
	unsigned short r6;
	vdynamic *r3;
	vbyte *r4;
	int r1, r2, r5;
	r1 = r0->length;
	r2 = 0;
	if( r1 != r2 ) goto label$164$5;
	r3 = NULL;
	return r3;
	label$164$5:
	r1 = r0->length;
	--r1;
	r0->length = r1;
	r4 = r0->bytes;
	r1 = r0->length;
	r5 = 1;
	r5 = r1 << r5;
	r2 = *(unsigned short*)(r4 + r5);
	r6 = (int)r2;
	r3 = hl_alloc_dynamic(&type$2);
	r3->v.i = r6;
	return r3;
}

int hl_types_ArrayBytes_hl_UI16_push(hl__types__ArrayBytes_hl_UI16 r0,unsigned short r1) {
	vbyte *r6;
	int r2, r4, r5, r7;
	r2 = r0->length;
	r4 = r0->size;
	if( r4 != r2 ) goto label$165$5;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r2);
	goto label$165$8;
	label$165$5:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$165$8:
	r6 = r0->bytes;
	r5 = (int)r1;
	r7 = 1;
	r7 = r2 << r7;
	*(unsigned short*)(r6 + r7) = (unsigned short)r5;
	r4 = r0->length;
	return r4;
}

void hl_types_ArrayBytes_hl_UI16_reverse(hl__types__ArrayBytes_hl_UI16 r0) {
	unsigned short r10, r12;
	vbyte *r7, *r8, *r11;
	int r1, r3, r4, r5, r6, r9, r13;
	r1 = 0;
	r3 = r0->length;
	r4 = 1;
	r3 = r3 >> r4;
	label$166$4:
	if( r1 >= r3 ) goto label$166$33;
	r4 = r1;
	++r1;
	r5 = r0->length;
	r6 = 1;
	r5 = r5 - r6;
	r5 = r5 - r4;
	r7 = r0->bytes;
	r9 = 1;
	r9 = r4 << r9;
	r6 = *(unsigned short*)(r7 + r9);
	r10 = (int)r6;
	r8 = r0->bytes;
	r11 = r0->bytes;
	r9 = 1;
	r9 = r5 << r9;
	r6 = *(unsigned short*)(r11 + r9);
	r12 = (int)r6;
	r9 = (int)r12;
	r13 = 1;
	r13 = r4 << r13;
	*(unsigned short*)(r8 + r13) = (unsigned short)r9;
	r8 = r0->bytes;
	r9 = (int)r10;
	r13 = 1;
	r13 = r5 << r13;
	*(unsigned short*)(r8 + r13) = (unsigned short)r9;
	goto label$166$4;
	label$166$33:
	return;
}

vdynamic* hl_types_ArrayBytes_hl_UI16_shift(hl__types__ArrayBytes_hl_UI16 r0) {
	unsigned short r7;
	vdynamic *r4;
	vbyte *r5, *r6, *r8, *r9, *r10;
	int r2, r3, r11, r12;
	r2 = r0->length;
	r3 = 0;
	if( r2 != r3 ) goto label$167$5;
	r4 = NULL;
	return r4;
	label$167$5:
	r5 = r0->bytes;
	r2 = 0;
	r3 = 1;
	r3 = r2 << r3;
	r2 = *(unsigned short*)(r5 + r3);
	r7 = (int)r2;
	r2 = r0->length;
	--r2;
	r0->length = r2;
	r6 = r0->bytes;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r2 = 1;
	r3 = 1;
	r2 = r2 << r3;
	r10 = r0->bytes;
	r3 = 0;
	r11 = r0->length;
	r12 = 1;
	r11 = r11 << r12;
	hl_bytes_blit(r6,r3,r8,r2,r11);
	r4 = hl_alloc_dynamic(&type$2);
	r4->v.i = r7;
	return r4;
}

void hl_types_ArrayBytes_hl_UI16_blit(hl__types__ArrayBytes_hl_UI16 r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	venum *r9;
	hl__types__ArrayBytes_hl_UI16 r5;
	vbyte *r10, *r11, *r12, *r13, *r15;
	int r7, r8, r14, r16, r17;
	r5 = (hl__types__ArrayBytes_hl_UI16)hl_dyn_castp(&r2,&type$31,&type$35);
	r8 = 0;
	if( r1 < r8 ) goto label$168$14;
	r8 = 0;
	if( r3 < r8 ) goto label$168$14;
	r8 = 0;
	if( r4 < r8 ) goto label$168$14;
	r7 = r1 + r4;
	r8 = r0->length;
	if( r8 < r7 ) goto label$168$14;
	r7 = r3 + r4;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r8 >= r7 ) goto label$168$16;
	label$168$14:
	r9 = (venum*)global$808;
	hl_throw((vdynamic*)r9);
	label$168$16:
	r10 = r0->bytes;
	r11 = r0->bytes;
	r8 = 1;
	r7 = r1 << r8;
	r12 = r5->bytes;
	r13 = r0->bytes;
	r14 = 1;
	r8 = r3 << r14;
	r15 = r0->bytes;
	r17 = 1;
	r16 = r4 << r17;
	hl_bytes_blit(r10,r7,r12,r8,r16);
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_hl_UI16_slice(hl__types__ArrayBytes_hl_UI16 r0,int r1,vdynamic* r2) {
	hl__types__ArrayBytes_hl_UI16 r8;
	vbyte *r9, *r10, *r11, *r12;
	int r4, r5, r6, r7, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$169$9;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$169$9;
	r4 = 0;
	r1 = r4;
	label$169$9:
	if( r2 ) goto label$169$12;
	r5 = r0->length;
	goto label$169$20;
	label$169$12:
	r5 = r2 ? r2->v.i : 0;
	r6 = 0;
	if( r5 >= r6 ) goto label$169$17;
	r6 = r0->length;
	r5 = r5 + r6;
	label$169$17:
	r6 = r0->length;
	if( r6 >= r5 ) goto label$169$20;
	r5 = r0->length;
	label$169$20:
	r5 = r5 - r1;
	r7 = 0;
	if( r5 >= r7 ) goto label$169$26;
	r8 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r8);
	return ((hl__types__ArrayBase)r8);
	label$169$26:
	r8 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r8);
	r8->size = r5;
	r8->length = r5;
	r9 = r0->bytes;
	r10 = r0->bytes;
	r7 = 1;
	r6 = r1 << r7;
	r11 = r0->bytes;
	r14 = 1;
	r13 = r5 << r14;
	r12 = hl__Bytes_Bytes_Impl__sub(r9,r6,r13);
	r8->bytes = r12;
	return ((hl__types__ArrayBase)r8);
}

void hl_types_ArrayBytes_hl_UI16_sort(hl__types__ArrayBytes_hl_UI16 r0,vclosure* r1) {
	hl_type *r3, *r4;
	vclosure *r8, *r9;
	int r6, r7;
	vbyte *r5;
	r3 = &type$2;
	r4 = &type$3;
	if( hl_same_type(r3,r4) != 0 ) {} else goto label$170$12;
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$170$9;
	r8 = NULL;
	goto label$170$10;
	label$170$9:
	r8 = hl_alloc_closure_ptr(&type$3173,fun$3242,r1);
	label$170$10:
	hl_bsort_i32(r5,r6,r7,r8);
	goto label$170$20;
	label$170$12:
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$170$18;
	r9 = NULL;
	goto label$170$19;
	label$170$18:
	r9 = hl_alloc_closure_ptr(&type$3175,fun$3243,r1);
	label$170$19:
	hl_bsort_f64(r5,r6,r7,r9);
	label$170$20:
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_hl_UI16_splice(hl__types__ArrayBytes_hl_UI16 r0,int r1,int r2) {
	hl__types__ArrayBytes_hl_UI16 r6;
	vbyte *r7, *r8, *r9, *r10, *r13, *r14, *r15, *r17;
	int r4, r5, r11, r12, r16, r18, r19;
	r5 = 0;
	if( r2 >= r5 ) goto label$171$5;
	r6 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$171$5:
	r5 = 0;
	if( r1 >= r5 ) goto label$171$14;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$171$14;
	r4 = 0;
	r1 = r4;
	label$171$14:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$171$21;
	r4 = 0;
	r1 = r4;
	r4 = 0;
	r2 = r4;
	goto label$171$31;
	label$171$21:
	r4 = r1 + r2;
	r5 = r0->length;
	if( r5 >= r4 ) goto label$171$31;
	r4 = r0->length;
	r4 = r4 - r1;
	r2 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$171$31;
	r4 = 0;
	r2 = r4;
	label$171$31:
	r5 = 0;
	if( r2 != r5 ) goto label$171$36;
	r6 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$171$36:
	r6 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r6);
	r7 = r0->bytes;
	r8 = r0->bytes;
	r5 = 1;
	r4 = r1 << r5;
	r9 = r0->bytes;
	r12 = 1;
	r11 = r2 << r12;
	r10 = hl__Bytes_Bytes_Impl__sub(r7,r4,r11);
	r6->bytes = r10;
	r6->length = r2;
	r6->size = r2;
	r5 = r1 + r2;
	r10 = r0->bytes;
	r13 = r0->bytes;
	r12 = 1;
	r11 = r1 << r12;
	r14 = r0->bytes;
	r15 = r0->bytes;
	r16 = 1;
	r12 = r5 << r16;
	r17 = r0->bytes;
	r18 = r0->length;
	r18 = r18 - r5;
	r19 = 1;
	r18 = r18 << r19;
	hl_bytes_blit(r10,r11,r14,r12,r18);
	r16 = r0->length;
	r16 = r16 - r2;
	r0->length = r16;
	return ((hl__types__ArrayBase)r6);
}

String hl_types_ArrayBytes_hl_UI16_toString(hl__types__ArrayBytes_hl_UI16 r0) {
	String r11;
	unsigned short r9;
	StringBuf r1;
	vdynamic *r10;
	vbyte *r8;
	int r3, r4, r5, r6, r7;
	r1 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r1);
	r3 = 91;
	StringBuf_addChar(r1,r3);
	r3 = 0;
	r4 = r0->length;
	label$172$6:
	if( r3 >= r4 ) goto label$172$24;
	r5 = r3;
	++r3;
	r7 = 0;
	if( r7 >= r5 ) goto label$172$15;
	if( r1 == NULL ) hl_null_access();
	r6 = 44;
	StringBuf_addChar(r1,r6);
	label$172$15:
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r7 = 1;
	r7 = r5 << r7;
	r6 = *(unsigned short*)(r8 + r7);
	r9 = (int)r6;
	r10 = hl_alloc_dynamic(&type$2);
	r10->v.i = r9;
	StringBuf_add(r1,((vdynamic*)r10));
	goto label$172$6;
	label$172$24:
	if( r1 == NULL ) hl_null_access();
	r3 = 93;
	StringBuf_addChar(r1,r3);
	r11 = StringBuf_toString(r1);
	return r11;
}

void hl_types_ArrayBytes_hl_UI16_unshift(hl__types__ArrayBytes_hl_UI16 r0,unsigned short r1) {
	vbyte *r5, *r6, *r7, *r8, *r9;
	int r3, r4, r10, r11, r12;
	r3 = r0->length;
	r4 = r0->size;
	if( r3 != r4 ) goto label$173$6;
	r3 = r0->length;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r3);
	goto label$173$9;
	label$173$6:
	r3 = r0->length;
	++r3;
	r0->length = r3;
	label$173$9:
	r5 = r0->bytes;
	r6 = r0->bytes;
	r3 = 1;
	r4 = 1;
	r3 = r3 << r4;
	r7 = r0->bytes;
	r9 = r0->bytes;
	r10 = 0;
	r11 = r0->length;
	r12 = 1;
	r11 = r11 - r12;
	r12 = 1;
	r11 = r11 << r12;
	hl_bytes_blit(r5,r3,r9,r10,r11);
	r8 = r0->bytes;
	r4 = 0;
	r10 = (int)r1;
	r11 = 1;
	r11 = r4 << r11;
	*(unsigned short*)(r8 + r11) = (unsigned short)r10;
	return;
}

void hl_types_ArrayBytes_hl_UI16_insert(hl__types__ArrayBytes_hl_UI16 r0,int r1,unsigned short r2) {
	vbyte *r6, *r7, *r8, *r9, *r11, *r12;
	int r4, r5, r10, r13, r14, r15;
	r5 = 0;
	if( r1 >= r5 ) goto label$174$10;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$174$9;
	r4 = 0;
	r1 = r4;
	label$174$9:
	goto label$174$14;
	label$174$10:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$174$14;
	r4 = r0->length;
	r1 = r4;
	label$174$14:
	r4 = r0->length;
	r5 = r0->size;
	if( r4 != r5 ) goto label$174$20;
	r4 = r0->length;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r4);
	goto label$174$23;
	label$174$20:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$174$23:
	r6 = r0->bytes;
	r7 = r0->bytes;
	r5 = 1;
	r4 = r1 + r5;
	r5 = 1;
	r4 = r4 << r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r10 = 1;
	r5 = r1 << r10;
	r11 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r1;
	r15 = 1;
	r14 = r14 - r15;
	r15 = 1;
	r14 = r14 << r15;
	hl_bytes_blit(r6,r4,r8,r5,r14);
	r12 = r0->bytes;
	r13 = (int)r2;
	r14 = 1;
	r14 = r1 << r14;
	*(unsigned short*)(r12 + r14) = (unsigned short)r13;
	return;
}

bool hl_types_ArrayBytes_hl_UI16_remove(hl__types__ArrayBytes_hl_UI16 r0,unsigned short r1) {
	bool r7;
	vdynamic *r3;
	vbyte *r8, *r9, *r10, *r11, *r13;
	int r2, r5, r6, r12, r14, r15;
	r3 = NULL;
	r2 = hl_types_ArrayBytes_hl_UI16_indexOf(r0,r1,r3);
	r6 = 0;
	if( r2 >= r6 ) goto label$175$6;
	r7 = false;
	return r7;
	label$175$6:
	r5 = r0->length;
	--r5;
	r0->length = r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r6 = 1;
	r5 = r2 << r6;
	r10 = r0->bytes;
	r11 = r0->bytes;
	r12 = 1;
	r6 = r2 + r12;
	r12 = 1;
	r6 = r6 << r12;
	r13 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r2;
	r15 = 1;
	r14 = r14 << r15;
	hl_bytes_blit(r8,r5,r10,r6,r14);
	r7 = true;
	return r7;
}

int hl_types_ArrayBytes_hl_UI16_indexOf(hl__types__ArrayBytes_hl_UI16 r0,unsigned short r1,vdynamic* r2) {
	unsigned short r10;
	vbyte *r8;
	int r3, r4, r5, r6, r7, r9;
	if( r2 ) goto label$176$3;
	r3 = 0;
	goto label$176$4;
	label$176$3:
	r3 = r2 ? r2->v.i : 0;
	label$176$4:
	r5 = 0;
	if( r3 >= r5 ) goto label$176$13;
	r5 = r0->length;
	r4 = r3 + r5;
	r3 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$176$13;
	r4 = 0;
	r3 = r4;
	label$176$13:
	r4 = r3;
	r5 = r0->length;
	label$176$15:
	if( r4 >= r5 ) goto label$176$27;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r9 = 1;
	r9 = r6 << r9;
	r7 = *(unsigned short*)(r8 + r9);
	r10 = (int)r7;
	if( r10 != r1 ) goto label$176$26;
	return r6;
	label$176$26:
	goto label$176$15;
	label$176$27:
	r4 = -1;
	return r4;
}

int hl_types_ArrayBytes_hl_UI16_lastIndexOf(hl__types__ArrayBytes_hl_UI16 r0,unsigned short r1,vdynamic* r2) {
	unsigned short r8;
	vbyte *r7;
	int r3, r4, r5, r6;
	r3 = r0->length;
	if( !r2 ) goto label$177$4;
	r4 = r2 ? r2->v.i : 0;
	goto label$177$6;
	label$177$4:
	r5 = 1;
	r4 = r3 - r5;
	label$177$6:
	if( r4 < r3 ) goto label$177$11;
	r6 = 1;
	r5 = r3 - r6;
	r4 = r5;
	goto label$177$15;
	label$177$11:
	r6 = 0;
	if( r4 >= r6 ) goto label$177$15;
	r5 = r4 + r3;
	r4 = r5;
	label$177$15:
	r6 = 0;
	if( r4 < r6 ) goto label$177$27;
	r7 = r0->bytes;
	r6 = 1;
	r6 = r4 << r6;
	r5 = *(unsigned short*)(r7 + r6);
	r8 = (int)r5;
	if( r8 != r1 ) goto label$177$25;
	return r4;
	label$177$25:
	--r4;
	goto label$177$15;
	label$177$27:
	r5 = -1;
	return r5;
}

hl__types__ArrayBytes_hl_UI16 hl_types_ArrayBytes_hl_UI16_copy(hl__types__ArrayBytes_hl_UI16 r0) {
	hl__types__ArrayBytes_hl_UI16 r1;
	vbyte *r4, *r5, *r7, *r8;
	int r3, r6, r9, r10;
	r1 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r1);
	r3 = r0->length;
	r1->size = r3;
	r1->length = r3;
	r4 = r0->bytes;
	r3 = r0->length;
	r6 = 1;
	r3 = r3 << r6;
	r5 = hl_alloc_bytes(r3);
	r1->bytes = r5;
	r5 = r0->bytes;
	r7 = r1->bytes;
	r3 = 0;
	r8 = r0->bytes;
	r6 = 0;
	r9 = r0->length;
	r10 = 1;
	r9 = r9 << r10;
	hl_bytes_blit(r7,r3,r8,r6,r9);
	return r1;
}

vdynamic* hl_types_ArrayBytes_hl_UI16_iterator(hl__types__ArrayBytes_hl_UI16 r0) {
	hl__types__BytesIterator_hl_UI16 r1;
	r1 = (hl__types__BytesIterator_hl_UI16)hl_alloc_obj(hl__types__BytesIterator_hl_UI16__val);
	hl_types_BytesIterator_hl_UI16_new(r1,r0);
	return ((vdynamic*)r1);
}

hl__types__ArrayDyn hl_types_ArrayBytes_hl_UI16_map(hl__types__ArrayBytes_hl_UI16 r0,vclosure* r1) {
	bool *r15;
	hl__types__ArrayObj r2;
	bool r14;
	unsigned short r12;
	hl__types__ArrayDyn r13;
	vdynamic *r10;
	vbyte *r9;
	varray *r8;
	int r4, r5, r6, r7, r11;
	r2 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r2);
	r4 = r0->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$180$9;
	r4 = r0->length;
	r5 = 1;
	r4 = r4 - r5;
	hl_types_ArrayObj___expand(r2,r4);
	label$180$9:
	r4 = 0;
	r5 = r0->length;
	label$180$11:
	if( r4 >= r5 ) goto label$180$26;
	r6 = r4;
	++r4;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->array;
	r9 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r11 = 1;
	r11 = r6 << r11;
	r7 = *(unsigned short*)(r9 + r11);
	r12 = (int)r7;
	r10 = r1->hasValue ? ((vdynamic* (*)(vdynamic*,unsigned short))r1->fun)((vdynamic*)r1->value,r12) : ((vdynamic* (*)(unsigned short))r1->fun)(r12);
	((vdynamic**)(r8 + 1))[r6] = r10;
	goto label$180$11;
	label$180$26:
	r14 = true;
	r15 = &r14;
	r13 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r2),r15);
	return r13;
}

hl__types__ArrayBytes_hl_UI16 hl_types_ArrayBytes_hl_UI16_filter(hl__types__ArrayBytes_hl_UI16 r0,vclosure* r1) {
	bool r11;
	hl__types__ArrayBytes_hl_UI16 r2;
	unsigned short r10;
	vbyte *r8;
	int r4, r5, r6, r7, r9;
	r2 = (hl__types__ArrayBytes_hl_UI16)hl_alloc_obj(hl__types__ArrayBytes_hl_UI16__val);
	hl_types_ArrayBytes_hl_UI16_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$181$4:
	if( r4 >= r5 ) goto label$181$19;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r9 = 1;
	r9 = r6 << r9;
	r7 = *(unsigned short*)(r8 + r9);
	r10 = (int)r7;
	if( r1 == NULL ) hl_null_access();
	r11 = r1->hasValue ? ((bool (*)(vdynamic*,unsigned short))r1->fun)((vdynamic*)r1->value,r10) : ((bool (*)(unsigned short))r1->fun)(r10);
	if( !r11 ) goto label$181$18;
	if( r2 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_hl_UI16_push(r2,r10);
	label$181$18:
	goto label$181$4;
	label$181$19:
	return r2;
}

void hl_types_ArrayBytes_hl_UI16_resize(hl__types__ArrayBytes_hl_UI16 r0,int r1) {
	vbyte *r5, *r6, *r7;
	int r3, r4, r8, r9;
	r3 = r0->length;
	if( r3 >= r1 ) goto label$182$6;
	r4 = 1;
	r3 = r1 - r4;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r3);
	goto label$182$20;
	label$182$6:
	r3 = r0->length;
	if( r1 >= r3 ) goto label$182$20;
	r5 = r0->bytes;
	r6 = r0->bytes;
	r4 = 1;
	r3 = r1 << r4;
	r7 = r0->bytes;
	r8 = r0->length;
	r8 = r8 - r1;
	r9 = 1;
	r8 = r8 << r9;
	r9 = 0;
	hl_bytes_fill(r5,r3,r8,r9);
	r0->length = r1;
	label$182$20:
	return;
}

vdynamic* hl_types_ArrayBytes_hl_UI16_getDyn(hl__types__ArrayBytes_hl_UI16 r0,int r1) {
	bool r2;
	unsigned short r6;
	vdynamic *r7;
	vbyte *r5;
	int r3, r4;
	r4 = r0->length;
	if( r1 >= r4 ) goto label$183$4;
	r2 = false;
	goto label$183$5;
	label$183$4:
	r2 = true;
	label$183$5:
	if( !r2 ) goto label$183$10;
	r5 = r0->bytes;
	r6 = 0;
	r7 = hl_alloc_dynamic(&type$2);
	r7->v.i = r6;
	return r7;
	label$183$10:
	r5 = r0->bytes;
	r4 = 1;
	r4 = r1 << r4;
	r3 = *(unsigned short*)(r5 + r4);
	r7 = hl_alloc_dynamic(&type$3);
	r7->v.i = r3;
	return r7;
}

void hl_types_ArrayBytes_hl_UI16_setDyn(hl__types__ArrayBytes_hl_UI16 r0,int r1,vdynamic* r2) {
	bool r4;
	unsigned short r7;
	vbyte *r6;
	int r5, r8;
	r5 = r0->length;
	if( r1 >= r5 ) goto label$184$4;
	r4 = false;
	goto label$184$5;
	label$184$4:
	r4 = true;
	label$184$5:
	if( !r4 ) goto label$184$7;
	hl_types_ArrayBytes_hl_UI16___expand(r0,r1);
	label$184$7:
	r6 = r0->bytes;
	r7 = (unsigned short)hl_dyn_casti(&r2,&type$9,&type$2);
	r5 = (int)r7;
	r8 = 1;
	r8 = r1 << r8;
	*(unsigned short*)(r6 + r8) = (unsigned short)r5;
	return;
}

int hl_types_ArrayBytes_hl_UI16_pushDyn(hl__types__ArrayBytes_hl_UI16 r0,vdynamic* r1) {
	unsigned short r3;
	int r2;
	r3 = (unsigned short)hl_dyn_casti(&r1,&type$9,&type$2);
	r2 = hl_types_ArrayBytes_hl_UI16_push(r0,r3);
	return r2;
}

vdynamic* hl_types_ArrayBytes_hl_UI16_popDyn(hl__types__ArrayBytes_hl_UI16 r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_hl_UI16_pop(r0);
	return ((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBytes_hl_UI16_shiftDyn(hl__types__ArrayBytes_hl_UI16 r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_hl_UI16_shift(r0);
	return ((vdynamic*)r1);
}

void hl_types_ArrayBytes_hl_UI16_unshiftDyn(hl__types__ArrayBytes_hl_UI16 r0,vdynamic* r1) {
	unsigned short r3;
	r3 = (unsigned short)hl_dyn_casti(&r1,&type$9,&type$2);
	hl_types_ArrayBytes_hl_UI16_unshift(r0,r3);
	return;
}

void hl_types_ArrayBytes_hl_UI16_insertDyn(hl__types__ArrayBytes_hl_UI16 r0,int r1,vdynamic* r2) {
	unsigned short r4;
	r4 = (unsigned short)hl_dyn_casti(&r2,&type$9,&type$2);
	hl_types_ArrayBytes_hl_UI16_insert(r0,r1,r4);
	return;
}

bool hl_types_ArrayBytes_hl_UI16_removeDyn(hl__types__ArrayBytes_hl_UI16 r0,vdynamic* r1) {
	bool r2;
	unsigned short r3;
	r3 = (unsigned short)hl_dyn_casti(&r1,&type$9,&type$2);
	r2 = hl_types_ArrayBytes_hl_UI16_remove(r0,r3);
	return r2;
}

void hl_types_ArrayBytes_hl_UI16_sortDyn(hl__types__ArrayBytes_hl_UI16 r0,vclosure* r1) {
	vclosure *r3;
	if( r1 ) goto label$191$3;
	r3 = NULL;
	goto label$191$4;
	label$191$3:
	r3 = hl_alloc_closure_ptr(&type$3194,fun$3247,r1);
	label$191$4:
	hl_types_ArrayBytes_hl_UI16_sort(r0,r3);
	return;
}

void hl_types_ArrayBytes_hl_UI16___expand(hl__types__ArrayBytes_hl_UI16 r0,int r1) {
	String r5, r8;
	int *r6;
	vbyte *r7, *r11, *r12, *r13, *r14;
	int r3, r4, r9, r10, r15, r16;
	r4 = 0;
	if( r1 >= r4 ) goto label$192$9;
	r5 = (String)global$896;
	r3 = r1;
	r6 = &r3;
	r7 = hl_itos(r3,r6);
	r8 = String___alloc__(r7,r3);
	r5 = String___add__(r5,r8);
	hl_throw((vdynamic*)r5);
	label$192$9:
	r4 = 1;
	r3 = r1 + r4;
	r9 = r0->size;
	if( r9 >= r3 ) goto label$192$40;
	r4 = r0->size;
	r9 = 3;
	r4 = r4 * r9;
	r9 = 1;
	r4 = r4 >> r9;
	if( r4 >= r3 ) goto label$192$20;
	r4 = r3;
	label$192$20:
	r7 = r0->bytes;
	r10 = 1;
	r9 = r4 << r10;
	r11 = hl_alloc_bytes(r9);
	r12 = r0->bytes;
	r9 = r0->length;
	r10 = 1;
	r9 = r9 << r10;
	r10 = 0;
	r14 = r0->bytes;
	r15 = 0;
	hl_bytes_blit(r11,r10,r14,r15,r9);
	r13 = r0->bytes;
	r16 = 1;
	r15 = r4 << r16;
	r15 = r15 - r9;
	r16 = 0;
	hl_bytes_fill(r11,r9,r15,r16);
	r0->bytes = r11;
	r0->size = r4;
	label$192$40:
	r0->length = r3;
	return;
}

