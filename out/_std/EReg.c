﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool EReg_match(EReg r0,String r1) {
	String r5;
	ereg *r3;
	bool r2;
	int r6, r7;
	vbyte *r4;
	r3 = r0->r;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->bytes;
	r6 = 0;
	r7 = r1->length;
	r2 = hl_regexp_match(r3,r4,r6,r7);
	if( !r2 ) goto label$38$9;
	r0->last = r1;
	goto label$38$11;
	label$38$9:
	r5 = NULL;
	r0->last = r5;
	label$38$11:
	return r2;
}

String EReg_matched(EReg r0,int r1) {
	String r7;
	ereg *r4;
	vdynamic *r8;
	int *r5;
	int r2, r3, r6;
	r2 = 0;
	r4 = r0->r;
	r5 = &r2;
	r3 = hl_regexp_matched_pos(r4,r1,r5);
	r6 = 0;
	if( r3 >= r6 ) goto label$39$8;
	r7 = NULL;
	return r7;
	label$39$8:
	r7 = r0->last;
	if( r7 == NULL ) hl_null_access();
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r2;
	r7 = String_substr(r7,r3,r8);
	return r7;
}

vvirtual* EReg_matchedPos(EReg r0) {
	ereg *r3;
	vvirtual *r6;
	int *r4;
	int r1, r2, r5;
	r1 = 0;
	r3 = r0->r;
	r2 = 0;
	r4 = &r1;
	r2 = hl_regexp_matched_pos(r3,r2,r4);
	r5 = 0;
	if( r2 >= r5 ) goto label$40$9;
	r6 = NULL;
	return r6;
	label$40$9:
	r6 = hl_alloc_virtual(&type$1293);
	if( hl_vfields(r6)[1] ) *(int*)(hl_vfields(r6)[1]) = (int)r2; else hl_dyn_seti(r6->value,5594516/*pos*/,&type$3,r2);
	if( hl_vfields(r6)[0] ) *(int*)(hl_vfields(r6)[0]) = (int)r1; else hl_dyn_seti(r6->value,5393365/*len*/,&type$3,r1);
	return r6;
}

bool EReg_matchSub(EReg r0,String r1,int r2,int* r3) {
	String r8;
	ereg *r6;
	bool r5;
	vbyte *r7;
	int r4, r9, r10;
	if( r3 ) goto label$41$3;
	r4 = -1;
	goto label$41$4;
	label$41$3:
	r4 = *r3;
	label$41$4:
	r6 = r0->r;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->bytes;
	r10 = 0;
	if( r4 >= r10 ) goto label$41$12;
	r9 = r1->length;
	r9 = r9 - r2;
	goto label$41$13;
	label$41$12:
	r9 = r4;
	label$41$13:
	r5 = hl_regexp_match(r6,r7,r2,r9);
	if( !r5 ) goto label$41$17;
	r0->last = r1;
	goto label$41$19;
	label$41$17:
	r8 = NULL;
	r0->last = r8;
	label$41$19:
	return r5;
}

hl__types__ArrayObj EReg_split(EReg r0,String r1) {
	ereg *r9;
	String r5;
	hl__types__ArrayObj r6;
	bool r7, r8;
	vdynamic *r16;
	int *r13;
	vbyte *r10;
	int r2, r4, r11, r12, r14, r15;
	r2 = 0;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	r6 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r6);
	r7 = true;
	label$42$6:
	r9 = r0->r;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->bytes;
	r8 = hl_regexp_match(r9,r10,r2,r4);
	if( !r8 ) goto label$42$41;
	r11 = 0;
	r9 = r0->r;
	r12 = 0;
	r13 = &r11;
	r12 = hl_regexp_matched_pos(r9,r12,r13);
	r15 = 0;
	if( r11 != r15 ) goto label$42$24;
	if( r7 ) goto label$42$24;
	r15 = r1->length;
	if( r12 != r15 ) goto label$42$23;
	goto label$42$41;
	label$42$23:
	++r12;
	label$42$24:
	if( r6 == NULL ) hl_null_access();
	r15 = r12 - r2;
	r16 = hl_alloc_dynamic(&type$3);
	r16->v.i = r15;
	r5 = String_substr(r1,r2,r16);
	r14 = hl_types_ArrayObj_push(r6,((vdynamic*)r5));
	r14 = r12 + r11;
	r14 = r14 - r2;
	r15 = r2 + r14;
	r2 = r15;
	r15 = r4 - r14;
	r4 = r15;
	r8 = false;
	r7 = r8;
	r8 = r0->global;
	if( r8 ) goto label$42$40;
	goto label$42$41;
	label$42$40:
	goto label$42$6;
	label$42$41:
	if( r6 == NULL ) hl_null_access();
	r16 = hl_alloc_dynamic(&type$3);
	r16->v.i = r4;
	r5 = String_substr(r1,r2,r16);
	r12 = hl_types_ArrayObj_push(r6,((vdynamic*)r5));
	return r6;
}

String EReg_replace(EReg r0,String r1,String r2) {
	$String r26;
	ereg *r12;
	String r7, r9, r27;
	hl__types__ArrayObj r8;
	bool r10, r11;
	StringBuf r3;
	vdynamic *r20, *r21;
	int *r16;
	varray *r22;
	vbyte *r13;
	int r5, r6, r14, r15, r17, r18, r19, r23, r24, r25, r28;
	hl_trap_ctx trap$0;
	r3 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r3);
	r5 = 0;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r2 == NULL ) hl_null_access();
	r9 = (String)global$10;
	r8 = String_split(r2,r9);
	r10 = true;
	label$43$9:
	r12 = r0->r;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->bytes;
	r11 = hl_regexp_match(r12,r13,r5,r6);
	if( !r11 ) goto label$43$139;
	r14 = 0;
	r12 = r0->r;
	r15 = 0;
	r16 = &r14;
	r15 = hl_regexp_matched_pos(r12,r15,r16);
	r18 = 0;
	if( r14 != r18 ) goto label$43$27;
	if( r10 ) goto label$43$27;
	r18 = r1->length;
	if( r15 != r18 ) goto label$43$26;
	goto label$43$139;
	label$43$26:
	++r15;
	label$43$27:
	if( r3 == NULL ) hl_null_access();
	r18 = r15 - r5;
	r20 = hl_alloc_dynamic(&type$3);
	r20->v.i = r18;
	StringBuf_addSub(r3,r1,r5,r20);
	if( r8 == NULL ) hl_null_access();
	r17 = r8->length;
	r18 = 0;
	if( r18 >= r17 ) goto label$43$44;
	r17 = 0;
	r18 = r8->length;
	if( ((unsigned)r17) < ((unsigned)r18) ) goto label$43$40;
	r7 = NULL;
	goto label$43$43;
	label$43$40:
	r22 = r8->array;
	r21 = ((vdynamic**)(r22 + 1))[r17];
	r7 = (String)r21;
	label$43$43:
	StringBuf_add(r3,((vdynamic*)r7));
	label$43$44:
	r17 = 1;
	label$43$45:
	if( r8 == NULL ) hl_null_access();
	r19 = r8->length;
	if( r17 >= r19 ) goto label$43$127;
	r19 = r8->length;
	if( ((unsigned)r17) < ((unsigned)r19) ) goto label$43$53;
	r7 = NULL;
	goto label$43$56;
	label$43$53:
	r22 = r8->array;
	r21 = ((vdynamic**)(r22 + 1))[r17];
	r7 = (String)r21;
	label$43$56:
	if( r7 == NULL ) hl_null_access();
	r13 = r7->bytes;
	r18 = 0;
	r18 = *(unsigned short*)(r13 + r18);
	r23 = 49;
	if( r18 < r23 ) goto label$43$101;
	r23 = 57;
	if( r23 < r18 ) goto label$43$101;
	r19 = 0;
	hl_trap(trap$0,r21,label$43$74);
	r12 = r0->r;
	r24 = (int)r18;
	r25 = 48;
	r24 = r24 - r25;
	r16 = &r19;
	r24 = hl_regexp_matched_pos(r12,r24,r16);
	hl_endtrap(trap$0);
	goto label$43$81;
	label$43$74:
	r26 = ($String)global$1;
	r11 = hl_BaseType_check(((hl__BaseType)r26),r21);
	if( !r11 ) goto label$43$80;
	r27 = (String)r21;
	r24 = -1;
	goto label$43$81;
	label$43$80:
	hl_rethrow((vdynamic*)r21);
	label$43$81:
	r25 = 0;
	if( r24 >= r25 ) goto label$43$88;
	if( r3 == NULL ) hl_null_access();
	r27 = (String)global$10;
	StringBuf_add(r3,((vdynamic*)r27));
	StringBuf_add(r3,((vdynamic*)r7));
	goto label$43$100;
	label$43$88:
	r25 = 0;
	if( r24 < r25 ) goto label$43$93;
	if( r3 == NULL ) hl_null_access();
	r20 = hl_alloc_dynamic(&type$3);
	r20->v.i = r19;
	StringBuf_addSub(r3,r1,r24,r20);
	label$43$93:
	if( r3 == NULL ) hl_null_access();
	r24 = 1;
	r25 = r7->length;
	r28 = 1;
	r25 = r25 - r28;
	r20 = hl_alloc_dynamic(&type$3);
	r20->v.i = r25;
	StringBuf_addSub(r3,r7,r24,r20);
	label$43$100:
	goto label$43$125;
	label$43$101:
	r24 = 0;
	if( r18 != r24 ) goto label$43$121;
	if( r3 == NULL ) hl_null_access();
	r9 = (String)global$10;
	StringBuf_add(r3,((vdynamic*)r9));
	++r17;
	r24 = r8->length;
	if( ((unsigned)r17) < ((unsigned)r24) ) goto label$43$111;
	r9 = NULL;
	goto label$43$114;
	label$43$111:
	r22 = r8->array;
	r21 = ((vdynamic**)(r22 + 1))[r17];
	r9 = (String)r21;
	label$43$114:
	if( !r9 ) goto label$43$120;
	if( r9 == NULL ) hl_null_access();
	r23 = r9->length;
	r24 = 0;
	if( r24 >= r23 ) goto label$43$120;
	StringBuf_add(r3,((vdynamic*)r9));
	label$43$120:
	goto label$43$125;
	label$43$121:
	if( r3 == NULL ) hl_null_access();
	r9 = (String)global$10;
	r9 = String___add__(r9,r7);
	StringBuf_add(r3,((vdynamic*)r9));
	label$43$125:
	++r17;
	goto label$43$45;
	label$43$127:
	r18 = r15 + r14;
	r18 = r18 - r5;
	r23 = r5 + r18;
	r5 = r23;
	r23 = r6 - r18;
	r6 = r23;
	r11 = false;
	r10 = r11;
	r11 = r0->global;
	if( r11 ) goto label$43$138;
	goto label$43$139;
	label$43$138:
	goto label$43$9;
	label$43$139:
	if( r3 == NULL ) hl_null_access();
	r20 = hl_alloc_dynamic(&type$3);
	r20->v.i = r6;
	StringBuf_addSub(r3,r1,r5,r20);
	r7 = StringBuf_toString(r3);
	return r7;
}

String EReg_map(EReg r0,String r1,vclosure* r2) {
	ereg *r12;
	String r9;
	bool r6;
	StringBuf r5;
	vdynamic *r11;
	int *r10;
	int r3, r7, r8, r13, r14;
	r3 = 0;
	r5 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r5);
	label$44$3:
	r6 = true;
	if( !r6 ) goto label$44$47;
	if( r1 == NULL ) hl_null_access();
	r8 = r1->length;
	if( r3 < r8 ) goto label$44$10;
	goto label$44$47;
	label$44$10:
	r10 = NULL;
	r6 = EReg_matchSub(r0,r1,r3,r10);
	if( r6 ) goto label$44$18;
	if( r5 == NULL ) hl_null_access();
	r11 = NULL;
	r9 = String_substr(r1,r3,r11);
	StringBuf_add(r5,((vdynamic*)r9));
	goto label$44$47;
	label$44$18:
	r7 = 0;
	r12 = r0->r;
	r8 = 0;
	r10 = &r7;
	r8 = hl_regexp_matched_pos(r12,r8,r10);
	if( r5 == NULL ) hl_null_access();
	r14 = r8 - r3;
	r11 = hl_alloc_dynamic(&type$3);
	r11->v.i = r14;
	r9 = String_substr(r1,r3,r11);
	StringBuf_add(r5,((vdynamic*)r9));
	if( r2 == NULL ) hl_null_access();
	r9 = r2->hasValue ? ((String (*)(vdynamic*,EReg))r2->fun)((vdynamic*)r2->value,r0) : ((String (*)(EReg))r2->fun)(r0);
	StringBuf_add(r5,((vdynamic*)r9));
	r14 = 0;
	if( r7 != r14 ) goto label$44$41;
	r14 = 1;
	r11 = hl_alloc_dynamic(&type$3);
	r11->v.i = r14;
	r9 = String_substr(r1,r8,r11);
	StringBuf_add(r5,((vdynamic*)r9));
	r14 = 1;
	r13 = r8 + r14;
	r3 = r13;
	goto label$44$43;
	label$44$41:
	r13 = r8 + r7;
	r3 = r13;
	label$44$43:
	r6 = r0->global;
	if( r6 ) goto label$44$46;
	goto label$44$47;
	label$44$46:
	goto label$44$3;
	label$44$47:
	r6 = r0->global;
	if( r6 ) goto label$44$58;
	r13 = 0;
	if( r13 >= r3 ) goto label$44$58;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->length;
	if( r3 >= r13 ) goto label$44$58;
	if( r5 == NULL ) hl_null_access();
	r11 = NULL;
	r9 = String_substr(r1,r3,r11);
	StringBuf_add(r5,((vdynamic*)r9));
	label$44$58:
	if( r5 == NULL ) hl_null_access();
	r9 = StringBuf_toString(r5);
	return r9;
}

void EReg_new(EReg r0,String r1,String r2) {
	ereg *r10;
	String r4, r5;
	hl__types__ArrayObj r3;
	bool r7;
	vbyte *r11, *r12;
	int r8, r9;
	if( r2 == NULL ) hl_null_access();
	r5 = (String)global$7;
	r3 = String_split(r2,r5);
	if( r3 == NULL ) hl_null_access();
	r8 = r3->length;
	r9 = 1;
	if( r8 > r9 ) goto label$37$9;
	r7 = false;
	goto label$37$10;
	label$37$9:
	r7 = true;
	label$37$10:
	r0->global = r7;
	r7 = r0->global;
	if( !r7 ) goto label$37$16;
	r4 = (String)global$8;
	r4 = hl_types_ArrayObj_join(r3,r4);
	r2 = r4;
	label$37$16:
	if( r1 == NULL ) hl_null_access();
	r11 = r1->bytes;
	if( r2 == NULL ) hl_null_access();
	r12 = r2->bytes;
	r10 = hl_regexp_new_options(r11,r12);
	r0->r = r10;
	return;
}

