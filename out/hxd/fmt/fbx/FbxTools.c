﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

String hxd_fmt_fbx_FbxTools_getType(vvirtual* r0) {
	String r4, r5;
	hl__types__ArrayObj r2;
	venum *r7;
	vdynamic *r6;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 3;
	if( r1 == r3 ) goto label$3425$10;
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1099;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
	label$3425$10:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = 2;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$3425$17;
	r7 = NULL;
	goto label$3425$20;
	label$3425$17:
	r8 = r2->array;
	r6 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r6;
	label$3425$20:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	r3 = 2;
	if( r1 != r3 ) goto label$3425$26;
	r4 = ((hxd_fmt_fbx_FbxProp_PString*)r7)->p0;
	return r4;
	label$3425$26:
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1099;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
}

String hxd_fmt_fbx_FbxTools_getName(vvirtual* r0) {
	String r4, r5;
	hl__types__ArrayObj r2;
	venum *r7;
	vdynamic *r6;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 3;
	if( r1 == r3 ) goto label$3404$10;
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1099;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
	label$3404$10:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = 1;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$3404$17;
	r7 = NULL;
	goto label$3404$20;
	label$3404$17:
	r8 = r2->array;
	r6 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r6;
	label$3404$20:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	r3 = 2;
	if( r1 != r3 ) goto label$3404$32;
	r4 = ((hxd_fmt_fbx_FbxProp_PString*)r7)->p0;
	if( r4 == NULL ) hl_null_access();
	r5 = (String)global$1101;
	r2 = String_split(r4,r5);
	if( r2 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_pop(r2);
	r4 = (String)r6;
	return r4;
	label$3404$32:
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1099;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
}

int hxd_fmt_fbx_FbxTools_getId(vvirtual* r0) {
	String r4, r5;
	hl__types__ArrayObj r2;
	venum *r7;
	double r9, r10, r11;
	vdynamic *r6;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 3;
	if( r1 == r3 ) goto label$3408$10;
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1099;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
	label$3408$10:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = 0;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$3408$17;
	r7 = NULL;
	goto label$3408$20;
	label$3408$17:
	r8 = r2->array;
	r6 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r6;
	label$3408$20:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	switch(r1) {
		default:
			r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
			r5 = (String)global$1100;
			r4 = String___add__(r4,r5);
			r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
			r5 = Std_string(((vdynamic*)r2));
			r4 = String___add__(r4,r5);
			hl_throw((vdynamic*)r4);
		case 0:
			r1 = ((hxd_fmt_fbx_FbxProp_PInt*)r7)->p0;
			return r1;
		case 1:
			r9 = ((hxd_fmt_fbx_FbxProp_PFloat*)r7)->p0;
			r11 = 4294967296.;
			r10 = fmod(r9,r11);
			r11 = 2147483648.;
			if( !(r10 >= r11) ) goto label$3408$40;
			r11 = 4294967296.;
			r10 = r10 - r11;
			goto label$3408$44;
			label$3408$40:
			r11 = -2147483648.;
			if( !(r10 < r11) ) goto label$3408$44;
			r11 = 4294967296.;
			r10 = r10 + r11;
			label$3408$44:
			r1 = (int)r10;
			return r1;
	}
}

String hxd_fmt_fbx_FbxTools_toString(venum* r0) {
	String r1, r4;
	int r2, r3;
	if( r0 ) goto label$3403$3;
	r1 = (String)global$1097;
	hl_throw((vdynamic*)r1);
	label$3403$3:
	if( r0 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r0);
	r3 = 2;
	if( r2 != r3 ) goto label$3403$9;
	r1 = ((hxd_fmt_fbx_FbxProp_PString*)r0)->p0;
	return r1;
	label$3403$9:
	r1 = (String)global$1098;
	r4 = Std_string(((vdynamic*)r0));
	r1 = String___add__(r1,r4);
	hl_throw((vdynamic*)r1);
}

double hxd_fmt_fbx_FbxTools_toFloat(venum* r0) {
	String r1, r3;
	double r4, r5;
	int r2;
	if( r0 ) goto label$3406$3;
	r1 = (String)global$1097;
	hl_throw((vdynamic*)r1);
	label$3406$3:
	if( r0 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r0);
	switch(r2) {
		default:
			r1 = (String)global$1098;
			r3 = Std_string(((vdynamic*)r0));
			r1 = String___add__(r1,r3);
			hl_throw((vdynamic*)r1);
		case 0:
			r2 = ((hxd_fmt_fbx_FbxProp_PInt*)r0)->p0;
			r4 = (double)r2;
			r5 = 1.;
			r4 = r4 * r5;
			return r4;
		case 1:
			r4 = ((hxd_fmt_fbx_FbxProp_PFloat*)r0)->p0;
			return r4;
	}
}

int hxd_fmt_fbx_FbxTools_toInt(venum* r0) {
	String r1, r3;
	double r4, r5, r6;
	int r2;
	if( r0 ) goto label$3400$3;
	r1 = (String)global$1097;
	hl_throw((vdynamic*)r1);
	label$3400$3:
	if( r0 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r0);
	switch(r2) {
		default:
			r1 = (String)global$1098;
			r3 = Std_string(((vdynamic*)r0));
			r1 = String___add__(r1,r3);
			hl_throw((vdynamic*)r1);
		case 0:
			r2 = ((hxd_fmt_fbx_FbxProp_PInt*)r0)->p0;
			return r2;
		case 1:
			r4 = ((hxd_fmt_fbx_FbxProp_PFloat*)r0)->p0;
			r6 = 4294967296.;
			r5 = fmod(r4,r6);
			r6 = 2147483648.;
			if( !(r5 >= r6) ) goto label$3400$20;
			r6 = 4294967296.;
			r5 = r5 - r6;
			goto label$3400$24;
			label$3400$20:
			r6 = -2147483648.;
			if( !(r5 < r6) ) goto label$3400$24;
			r6 = 4294967296.;
			r5 = r5 + r6;
			label$3400$24:
			r2 = (int)r5;
			return r2;
	}
}

int hxd_fmt_fbx_FbxTools_idToInt(double r0) {
	double r1, r2;
	int r3;
	r2 = 4294967296.;
	r1 = fmod(r0,r2);
	r2 = 2147483648.;
	if( !(r1 >= r2) ) goto label$3434$7;
	r2 = 4294967296.;
	r1 = r1 - r2;
	goto label$3434$11;
	label$3434$7:
	r2 = -2147483648.;
	if( !(r1 < r2) ) goto label$3434$11;
	r2 = 4294967296.;
	r1 = r1 + r2;
	label$3434$11:
	r3 = (int)r1;
	return r3;
}

bool hxd_fmt_fbx_FbxTools_hasProp(vvirtual* r0,venum* r1) {
	hl__types__ArrayObj r3;
	venum *r7;
	bool r6;
	vdynamic *r8;
	varray *r9;
	int r2, r4, r5;
	r2 = 0;
	if( r0 == NULL ) hl_null_access();
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	label$3424$3:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r2 >= r5 ) goto label$3424$21;
	r4 = r2;
	++r2;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$3424$13;
	r7 = NULL;
	goto label$3424$16;
	label$3424$13:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r4];
	r7 = (venum*)r8;
	label$3424$16:
	r6 = hl_type_enum_eq(((vdynamic*)r1),((vdynamic*)r7));
	if( !r6 ) goto label$3424$20;
	r6 = true;
	return r6;
	label$3424$20:
	goto label$3424$3;
	label$3424$21:
	r6 = false;
	return r6;
}

hl__types__ArrayBytes_Float hxd_fmt_fbx_FbxTools_getFloats(vvirtual* r0) {
	String r5, r6;
	hl__types__ArrayObj r3;
	venum *r8, *r10;
	hl__types__ArrayBytes_Int r11;
	hl__types__ArrayBytes_Float r12;
	double r15;
	vdynamic *r7;
	vbyte *r14;
	varray *r9;
	int r2, r4, r13;
	if( r0 == NULL ) hl_null_access();
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r4 = 1;
	if( r2 == r4 ) goto label$3407$15;
	r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r6 = (String)global$1053;
	r5 = String___add__(r5,r6);
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	r6 = Std_string(((vdynamic*)r3));
	r5 = String___add__(r5,r6);
	r6 = (String)global$1096;
	r5 = String___add__(r5,r6);
	hl_throw((vdynamic*)r5);
	label$3407$15:
	r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r3 == NULL ) hl_null_access();
	r2 = 0;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$3407$22;
	r8 = NULL;
	goto label$3407$25;
	label$3407$22:
	r9 = r3->array;
	r7 = ((vdynamic**)(r9 + 1))[r2];
	r8 = (venum*)r7;
	label$3407$25:
	if( r8 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r8);
	switch(r2) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
			r5 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
			r6 = (String)global$1053;
			r5 = String___add__(r5,r6);
			r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
			r6 = Std_string(((vdynamic*)r3));
			r5 = String___add__(r5,r6);
			r6 = (String)global$1096;
			r5 = String___add__(r5,r6);
			hl_throw((vdynamic*)r5);
		case 4:
			r11 = ((hxd_fmt_fbx_FbxProp_PInts*)r8)->p0;
			r12 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
			hl_types_ArrayBytes_Float_new(r12);
			r2 = 0;
			label$3407$41:
			if( r11 == NULL ) hl_null_access();
			r13 = r11->length;
			if( r2 >= r13 ) goto label$3407$59;
			if( r12 == NULL ) hl_null_access();
			r4 = r2;
			++r2;
			r13 = r11->length;
			if( ((unsigned)r4) < ((unsigned)r13) ) goto label$3407$52;
			r4 = 0;
			goto label$3407$56;
			label$3407$52:
			r14 = r11->bytes;
			r13 = 2;
			r13 = r4 << r13;
			r4 = *(int*)(r14 + r13);
			label$3407$56:
			r15 = (double)r4;
			r4 = hl_types_ArrayBytes_Float_push(r12,r15);
			goto label$3407$41;
			label$3407$59:
			if( r0 == NULL ) hl_null_access();
			r3 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
			if( r3 == NULL ) hl_null_access();
			r2 = 0;
			r10 = hl_alloc_enum(&type$1059,5);
			((hxd_fmt_fbx_FbxProp_PFloats*)r10)->p0 = r12;
			r4 = r3->length;
			if( ((unsigned)r2) < ((unsigned)r4) ) goto label$3407$67;
			hl_types_ArrayObj___expand(r3,r2);
			label$3407$67:
			r9 = r3->array;
			((venum**)(r9 + 1))[r2] = r10;
			return r12;
		case 5:
			r12 = ((hxd_fmt_fbx_FbxProp_PFloats*)r8)->p0;
			return r12;
	}
}

hl__types__ArrayBytes_Int hxd_fmt_fbx_FbxTools_getInts(vvirtual* r0) {
	String r4, r5;
	hl__types__ArrayObj r2;
	venum *r7;
	hl__types__ArrayBytes_Int r9;
	vdynamic *r6;
	varray *r8;
	int r1, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r3 = 1;
	if( r1 == r3 ) goto label$3427$15;
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1053;
	r4 = String___add__(r4,r5);
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	r5 = Std_string(((vdynamic*)r2));
	r4 = String___add__(r4,r5);
	r5 = (String)global$1096;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
	label$3427$15:
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	if( r2 == NULL ) hl_null_access();
	r1 = 0;
	r3 = r2->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$3427$22;
	r7 = NULL;
	goto label$3427$25;
	label$3427$22:
	r8 = r2->array;
	r6 = ((vdynamic**)(r8 + 1))[r1];
	r7 = (venum*)r6;
	label$3427$25:
	if( r7 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r7);
	r3 = 4;
	if( r1 != r3 ) goto label$3427$31;
	r9 = ((hxd_fmt_fbx_FbxProp_PInts*)r7)->p0;
	return r9;
	label$3427$31:
	r4 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r5 = (String)global$1053;
	r4 = String___add__(r4,r5);
	r2 = hl_vfields(r0)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r0)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r0->value,-393222421/*props*/,&type$46);
	r5 = Std_string(((vdynamic*)r2));
	r4 = String___add__(r4,r5);
	r5 = (String)global$1096;
	r4 = String___add__(r4,r5);
	hl_throw((vdynamic*)r4);
}

hl__types__ArrayObj hxd_fmt_fbx_FbxTools_getAll(vvirtual* r0,String r1) {
	String r3, r4;
	vvirtual *r9;
	hl__types__ArrayObj r2, r5, r12, r15;
	hl_type *r7;
	vdynamic *r13;
	int r8, r10, r11, r14, r16;
	varray *r6;
	if( r1 == NULL ) hl_null_access();
	r4 = (String)global$210;
	r2 = String_split(r1,r4);
	r7 = &type$697;
	r8 = 1;
	r6 = hl_alloc_array(r7,r8);
	r8 = 0;
	((vvirtual**)(r6 + 1))[r8] = r0;
	r5 = hl_types_ArrayObj_alloc(r6);
	r8 = 0;
	label$3402$10:
	if( r2 == NULL ) hl_null_access();
	r11 = r2->length;
	if( r8 >= r11 ) goto label$3402$70;
	r10 = r8;
	++r8;
	r11 = r2->length;
	if( ((unsigned)r10) < ((unsigned)r11) ) goto label$3402$20;
	r3 = NULL;
	goto label$3402$23;
	label$3402$20:
	r6 = r2->array;
	r13 = ((vdynamic**)(r6 + 1))[r10];
	r3 = (String)r13;
	label$3402$23:
	r7 = &type$697;
	r10 = 0;
	r6 = hl_alloc_array(r7,r10);
	r12 = hl_types_ArrayObj_alloc(r6);
	r10 = 0;
	label$3402$28:
	if( r5 == NULL ) hl_null_access();
	r14 = r5->length;
	if( r10 >= r14 ) goto label$3402$63;
	r11 = 0;
	r14 = r10;
	++r10;
	r16 = r5->length;
	if( ((unsigned)r14) < ((unsigned)r16) ) goto label$3402$39;
	r9 = NULL;
	goto label$3402$42;
	label$3402$39:
	r6 = r5->array;
	r13 = ((vdynamic**)(r6 + 1))[r14];
	r9 = hl_to_virtual(&type$697,(vdynamic*)r13);
	label$3402$42:
	if( r9 == NULL ) hl_null_access();
	r15 = hl_vfields(r9)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r9)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r9->value,-54870451/*childs*/,&type$46);
	label$3402$44:
	if( r15 == NULL ) hl_null_access();
	r16 = r15->length;
	if( r11 >= r16 ) goto label$3402$62;
	r16 = r15->length;
	if( ((unsigned)r11) < ((unsigned)r16) ) goto label$3402$52;
	r9 = NULL;
	goto label$3402$55;
	label$3402$52:
	r6 = r15->array;
	r13 = ((vdynamic**)(r6 + 1))[r11];
	r9 = hl_to_virtual(&type$697,(vdynamic*)r13);
	label$3402$55:
	++r11;
	if( r9 == NULL ) hl_null_access();
	r4 = hl_vfields(r9)[1] ? (*(String*)(hl_vfields(r9)[1])) : (String)hl_dyn_getp(r9->value,150958933/*name*/,&type$13);
	if( r4 != r3 && (!r4 || !r3 || String___compare(r4,(vdynamic*)r3) != 0) ) goto label$3402$61;
	if( r12 == NULL ) hl_null_access();
	r14 = hl_types_ArrayObj_push(r12,((vdynamic*)r9));
	label$3402$61:
	goto label$3402$44;
	label$3402$62:
	goto label$3402$28;
	label$3402$63:
	r5 = r12;
	if( r12 == NULL ) hl_null_access();
	r10 = r12->length;
	r11 = 0;
	if( r10 != r11 ) goto label$3402$69;
	return r12;
	label$3402$69:
	goto label$3402$10;
	label$3402$70:
	return r5;
}

vvirtual* hxd_fmt_fbx_FbxTools_get(vvirtual* r0,String r1,bool* r2) {
	String r5, r6, r17;
	vvirtual *r7, *r15;
	hl__types__ArrayObj r4, r11;
	bool r3, r14, r18;
	vdynamic *r12;
	varray *r13;
	int r8, r9, r10, r16;
	if( r2 ) goto label$3401$3;
	r3 = false;
	goto label$3401$4;
	label$3401$3:
	r3 = *r2;
	label$3401$4:
	if( r1 == NULL ) hl_null_access();
	r6 = (String)global$210;
	r4 = String_split(r1,r6);
	r7 = r0;
	r8 = 0;
	label$3401$9:
	if( r4 == NULL ) hl_null_access();
	r10 = r4->length;
	if( r8 >= r10 ) goto label$3401$61;
	r10 = r4->length;
	if( ((unsigned)r8) < ((unsigned)r10) ) goto label$3401$17;
	r5 = NULL;
	goto label$3401$20;
	label$3401$17:
	r13 = r4->array;
	r12 = ((vdynamic**)(r13 + 1))[r8];
	r5 = (String)r12;
	label$3401$20:
	++r8;
	r14 = false;
	r9 = 0;
	if( r7 == NULL ) hl_null_access();
	r11 = hl_vfields(r7)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r7)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r7->value,-54870451/*childs*/,&type$46);
	label$3401$25:
	if( r11 == NULL ) hl_null_access();
	r16 = r11->length;
	if( r9 >= r16 ) goto label$3401$45;
	r16 = r11->length;
	if( ((unsigned)r9) < ((unsigned)r16) ) goto label$3401$33;
	r15 = NULL;
	goto label$3401$36;
	label$3401$33:
	r13 = r11->array;
	r12 = ((vdynamic**)(r13 + 1))[r9];
	r15 = hl_to_virtual(&type$697,(vdynamic*)r12);
	label$3401$36:
	++r9;
	if( r15 == NULL ) hl_null_access();
	r6 = hl_vfields(r15)[1] ? (*(String*)(hl_vfields(r15)[1])) : (String)hl_dyn_getp(r15->value,150958933/*name*/,&type$13);
	if( r6 != r5 && (!r6 || !r5 || String___compare(r6,(vdynamic*)r5) != 0) ) goto label$3401$44;
	r7 = r15;
	r18 = true;
	r14 = r18;
	goto label$3401$45;
	label$3401$44:
	goto label$3401$25;
	label$3401$45:
	if( r14 ) goto label$3401$60;
	if( !r3 ) goto label$3401$49;
	r15 = NULL;
	return r15;
	label$3401$49:
	if( r0 == NULL ) hl_null_access();
	r6 = hl_vfields(r0)[1] ? (*(String*)(hl_vfields(r0)[1])) : (String)hl_dyn_getp(r0->value,150958933/*name*/,&type$13);
	r17 = (String)global$1094;
	r6 = String___add__(r6,r17);
	r6 = String___add__(r6,r1);
	r17 = (String)global$747;
	r6 = String___add__(r6,r17);
	r6 = String___add__(r6,r5);
	r17 = (String)global$1095;
	r6 = String___add__(r6,r17);
	hl_throw((vdynamic*)r6);
	label$3401$60:
	goto label$3401$9;
	label$3401$61:
	return r7;
}

