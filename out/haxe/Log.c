﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void haxe_Log_trace(vdynamic* r0,vvirtual* r1) {
	String r3;
	r3 = haxe_Log_formatOutput(r0,r1);
	Sys_println(((vdynamic*)r3));
	return;
}

String haxe_Log_formatOutput(vdynamic* r0,vvirtual* r1) {
	String r2, r4, r5, r12, r13;
	hl__types__ArrayDyn r9;
	int *r7;
	vdynamic *r3;
	vbyte *r8;
	int r6, r10, r11;
	r2 = Std_string(r0);
	if( r1 ) goto label$1765$3;
	return r2;
	label$1765$3:
	if( r1 == NULL ) hl_null_access();
	r4 = hl_vfields(r1)[2] ? (*(String*)(hl_vfields(r1)[2])) : (String)hl_dyn_getp(r1->value,37969014/*fileName*/,&type$13);
	r5 = (String)global$440;
	r4 = String___add__(r4,r5);
	r6 = hl_vfields(r1)[3] ? (*(int*)(hl_vfields(r1)[3])) : (int)hl_dyn_geti(r1->value,371360620/*lineNumber*/,&type$3);
	r7 = &r6;
	r8 = hl_itos(r6,r7);
	r5 = String___alloc__(r8,r6);
	r4 = String___add__(r4,r5);
	if( !r1 ) goto label$1765$30;
	r9 = hl_vfields(r1)[1] ? (*(hl__types__ArrayDyn*)(hl_vfields(r1)[1])) : (hl__types__ArrayDyn)hl_dyn_getp(r1->value,-317173289/*customParams*/,&type$321);
	if( !r9 ) goto label$1765$30;
	r6 = 0;
	r9 = hl_vfields(r1)[1] ? (*(hl__types__ArrayDyn*)(hl_vfields(r1)[1])) : (hl__types__ArrayDyn)hl_dyn_getp(r1->value,-317173289/*customParams*/,&type$321);
	label$1765$17:
	if( r9 == NULL ) hl_null_access();
	r11 = hl_types_ArrayDyn_get_length(r9);
	if( r6 >= r11 ) goto label$1765$30;
	r12 = (String)global$335;
	r10 = r6;
	++r6;
	r3 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r9->$type->vobj_proto[0])(r9,r10);
	r13 = Std_string(r3);
	r12 = String___add__(r12,r13);
	r5 = String___add__(r2,r12);
	r2 = r5;
	goto label$1765$17;
	label$1765$30:
	r12 = (String)global$754;
	r5 = String___add__(r4,r12);
	r5 = String___add__(r5,r2);
	return r5;
}

