﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_fmt_hmd_Writer_writeProperty(hxd__fmt__hmd__Writer r0,venum* r1) {
	haxe__io__Output r3;
	double r5;
	int r4;
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r1);
	((void (*)(haxe__io__Output,int))r3->$type->vobj_proto[0])(r3,r4);
	r4 = HL__ENUM_INDEX__(r1);
	switch(r4) {
		default:
			goto label$3494$14;
		case 0:
			r3 = r0->out;
			if( r3 == NULL ) hl_null_access();
			r5 = ((hxd_fmt_hmd_Property_CameraFOVY*)r1)->p0;
			haxe_io_Output_writeFloat(r3,r5);
			goto label$3494$14;
		case 1:
			goto label$3494$14;
		case 2:
			break;
	}
	label$3494$14:
	return;
}

void hxd_fmt_hmd_Writer_writeProps(hxd__fmt__hmd__Writer r0,hl__types__ArrayObj r1) {
	String r7;
	venum *r9;
	haxe__io__Output r6;
	vdynamic *r5;
	varray *r10;
	int r3, r4, r8;
	if( r1 ) goto label$3495$10;
	r3 = r0->version;
	r4 = 1;
	if( r3 != r4 ) goto label$3495$5;
	return;
	label$3495$5:
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r3 = 0;
	((void (*)(haxe__io__Output,int))r6->$type->vobj_proto[0])(r6,r3);
	return;
	label$3495$10:
	r3 = r0->version;
	r4 = 1;
	if( r3 != r4 ) goto label$3495$15;
	r7 = (String)global$1182;
	hl_throw((vdynamic*)r7);
	label$3495$15:
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r3 = r1->length;
	((void (*)(haxe__io__Output,int))r6->$type->vobj_proto[0])(r6,r3);
	r3 = 0;
	label$3495$21:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->length;
	if( r3 >= r8 ) goto label$3495$36;
	r4 = r3;
	++r3;
	r8 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r8) ) goto label$3495$31;
	r9 = NULL;
	goto label$3495$34;
	label$3495$31:
	r10 = r1->array;
	r5 = ((vdynamic**)(r10 + 1))[r4];
	r9 = (venum*)r5;
	label$3495$34:
	hxd_fmt_hmd_Writer_writeProperty(r0,r9);
	goto label$3495$21;
	label$3495$36:
	return;
}

void hxd_fmt_hmd_Writer_writeName(hxd__fmt__hmd__Writer r0,String r1) {
	venum *r5;
	haxe__io__Output r3;
	int r4;
	if( r1 ) goto label$3496$6;
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	r4 = 255;
	((void (*)(haxe__io__Output,int))r3->$type->vobj_proto[0])(r3,r4);
	return;
	label$3496$6:
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	((void (*)(haxe__io__Output,int))r3->$type->vobj_proto[0])(r3,r4);
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	r5 = NULL;
	haxe_io_Output_writeString(r3,r1,r5);
	return;
}

void hxd_fmt_hmd_Writer_writeFloat(hxd__fmt__hmd__Writer r0,double r1) {
	haxe__io__Output r3;
	double r4, r6;
	int r5;
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	r5 = 0;
	r6 = (double)r5;
	if( r1 != r6 ) goto label$3497$8;
	r5 = 0;
	r4 = (double)r5;
	goto label$3497$9;
	label$3497$8:
	r4 = r1;
	label$3497$9:
	haxe_io_Output_writeFloat(r3,r4);
	return;
}

void hxd_fmt_hmd_Writer_writePosition(hxd__fmt__hmd__Writer r0,hxd__fmt__hmd__Position r1,bool* r2) {
	bool r3;
	haxe__io__Output r6;
	double r4, r7, r9;
	int r8;
	if( r2 ) goto label$3498$3;
	r3 = true;
	goto label$3498$4;
	label$3498$3:
	r3 = *r2;
	label$3498$4:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$14;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$15;
	label$3498$14:
	r7 = r4;
	label$3498$15:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->y;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$25;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$26;
	label$3498$25:
	r7 = r4;
	label$3498$26:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->z;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$36;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$37;
	label$3498$36:
	r7 = r4;
	label$3498$37:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->qx;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$47;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$48;
	label$3498$47:
	r7 = r4;
	label$3498$48:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->qy;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$58;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$59;
	label$3498$58:
	r7 = r4;
	label$3498$59:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->qz;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$69;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$70;
	label$3498$69:
	r7 = r4;
	label$3498$70:
	haxe_io_Output_writeFloat(r6,r7);
	if( !r3 ) goto label$3498$105;
	r4 = r1->sx;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$81;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$82;
	label$3498$81:
	r7 = r4;
	label$3498$82:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->sy;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$92;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$93;
	label$3498$92:
	r7 = r4;
	label$3498$93:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->sz;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0;
	r9 = (double)r8;
	if( r4 != r9 ) goto label$3498$103;
	r8 = 0;
	r7 = (double)r8;
	goto label$3498$104;
	label$3498$103:
	r7 = r4;
	label$3498$104:
	haxe_io_Output_writeFloat(r6,r7);
	label$3498$105:
	return;
}

void hxd_fmt_hmd_Writer_writeBounds(hxd__fmt__hmd__Writer r0,h3d__col__Bounds r1) {
	haxe__io__Output r4;
	double r2, r5, r7;
	int r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->xMin;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r7 = (double)r6;
	if( r2 != r7 ) goto label$3499$10;
	r6 = 0;
	r5 = (double)r6;
	goto label$3499$11;
	label$3499$10:
	r5 = r2;
	label$3499$11:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->yMin;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r7 = (double)r6;
	if( r2 != r7 ) goto label$3499$21;
	r6 = 0;
	r5 = (double)r6;
	goto label$3499$22;
	label$3499$21:
	r5 = r2;
	label$3499$22:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->zMin;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r7 = (double)r6;
	if( r2 != r7 ) goto label$3499$32;
	r6 = 0;
	r5 = (double)r6;
	goto label$3499$33;
	label$3499$32:
	r5 = r2;
	label$3499$33:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->xMax;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r7 = (double)r6;
	if( r2 != r7 ) goto label$3499$43;
	r6 = 0;
	r5 = (double)r6;
	goto label$3499$44;
	label$3499$43:
	r5 = r2;
	label$3499$44:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->yMax;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r7 = (double)r6;
	if( r2 != r7 ) goto label$3499$54;
	r6 = 0;
	r5 = (double)r6;
	goto label$3499$55;
	label$3499$54:
	r5 = r2;
	label$3499$55:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->zMax;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0;
	r7 = (double)r6;
	if( r2 != r7 ) goto label$3499$65;
	r6 = 0;
	r5 = (double)r6;
	goto label$3499$66;
	label$3499$65:
	r5 = r2;
	label$3499$66:
	haxe_io_Output_writeFloat(r4,r5);
	return;
}

void hxd_fmt_hmd_Writer_writeSkin(hxd__fmt__hmd__Writer r0,hxd__fmt__hmd__Skin r1) {
	bool *r18;
	String r3;
	hl__types__ArrayObj r4, r9;
	bool r13, r17, r19;
	hl__types__ArrayBytes_Int r21;
	hxd__fmt__hmd__SkinSplit r20;
	haxe__io__Output r5;
	double r14, r16;
	hxd__fmt__hmd__Position r15;
	vdynamic *r11;
	vbyte *r23;
	varray *r12;
	hxd__fmt__hmd__SkinJoint r10;
	int r6, r7, r8, r22;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->name;
	if( r3 ) goto label$3500$5;
	r3 = (String)global$8;
	goto label$3500$6;
	label$3500$5:
	r3 = r1->name;
	label$3500$6:
	hxd_fmt_hmd_Writer_writeName(r0,r3);
	r4 = r1->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r4);
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r4 = r1->joints;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	haxe_io_Output_writeUInt16(r5,r6);
	r6 = 0;
	r4 = r1->joints;
	label$3500$17:
	if( r4 == NULL ) hl_null_access();
	r8 = r4->length;
	if( r6 >= r8 ) goto label$3500$104;
	r8 = r4->length;
	if( ((unsigned)r6) < ((unsigned)r8) ) goto label$3500$25;
	r10 = NULL;
	goto label$3500$28;
	label$3500$25:
	r12 = r4->array;
	r11 = ((vdynamic**)(r12 + 1))[r6];
	r10 = (hxd__fmt__hmd__SkinJoint)r11;
	label$3500$28:
	++r6;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r9);
	r3 = r10->name;
	hxd_fmt_hmd_Writer_writeName(r0,r3);
	r15 = r10->position;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sx;
	r7 = 1;
	r16 = (double)r7;
	if( r14 != r16 ) goto label$3500$74;
	r15 = r10->position;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sy;
	r7 = 1;
	r16 = (double)r7;
	if( r14 != r16 ) goto label$3500$74;
	r15 = r10->position;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sz;
	r7 = 1;
	r16 = (double)r7;
	if( r14 != r16 ) goto label$3500$74;
	r15 = r10->transpos;
	if( !r15 ) goto label$3500$72;
	r15 = r10->transpos;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sx;
	r7 = 1;
	r16 = (double)r7;
	if( r14 != r16 ) goto label$3500$74;
	r15 = r10->transpos;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sy;
	r7 = 1;
	r16 = (double)r7;
	if( r14 != r16 ) goto label$3500$74;
	r15 = r10->transpos;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sz;
	r7 = 1;
	r16 = (double)r7;
	if( r14 != r16 ) goto label$3500$74;
	label$3500$72:
	r13 = false;
	goto label$3500$75;
	label$3500$74:
	r13 = true;
	label$3500$75:
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r7 = r10->parent;
	r8 = 1;
	r7 = r7 + r8;
	if( !r13 ) goto label$3500$83;
	r8 = 32768;
	goto label$3500$84;
	label$3500$83:
	r8 = 0;
	label$3500$84:
	r7 = r7 | r8;
	haxe_io_Output_writeUInt16(r5,r7);
	r15 = r10->position;
	r17 = r13;
	r18 = &r17;
	hxd_fmt_hmd_Writer_writePosition(r0,r15,r18);
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r7 = r10->bind;
	r8 = 1;
	r7 = r7 + r8;
	haxe_io_Output_writeUInt16(r5,r7);
	r7 = r10->bind;
	r8 = 0;
	if( r7 < r8 ) goto label$3500$103;
	r15 = r10->transpos;
	r19 = r13;
	r18 = &r19;
	hxd_fmt_hmd_Writer_writePosition(r0,r15,r18);
	label$3500$103:
	goto label$3500$17;
	label$3500$104:
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = r1->split;
	if( r4 ) goto label$3500$111;
	r6 = 0;
	goto label$3500$114;
	label$3500$111:
	r4 = r1->split;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	label$3500$114:
	((void (*)(haxe__io__Output,int))r5->$type->vobj_proto[0])(r5,r6);
	r4 = r1->split;
	if( !r4 ) goto label$3500$163;
	r6 = 0;
	r4 = r1->split;
	label$3500$119:
	if( r4 == NULL ) hl_null_access();
	r8 = r4->length;
	if( r6 >= r8 ) goto label$3500$163;
	r8 = r4->length;
	if( ((unsigned)r6) < ((unsigned)r8) ) goto label$3500$127;
	r20 = NULL;
	goto label$3500$130;
	label$3500$127:
	r12 = r4->array;
	r11 = ((vdynamic**)(r12 + 1))[r6];
	r20 = (hxd__fmt__hmd__SkinSplit)r11;
	label$3500$130:
	++r6;
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	if( r20 == NULL ) hl_null_access();
	r7 = r20->materialIndex;
	((void (*)(haxe__io__Output,int))r5->$type->vobj_proto[0])(r5,r7);
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r21 = r20->joints;
	if( r21 == NULL ) hl_null_access();
	r7 = r21->length;
	((void (*)(haxe__io__Output,int))r5->$type->vobj_proto[0])(r5,r7);
	r7 = 0;
	r21 = r20->joints;
	label$3500$144:
	if( r21 == NULL ) hl_null_access();
	r22 = r21->length;
	if( r7 >= r22 ) goto label$3500$162;
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r8 = r7;
	++r7;
	r22 = r21->length;
	if( ((unsigned)r8) < ((unsigned)r22) ) goto label$3500$156;
	r8 = 0;
	goto label$3500$160;
	label$3500$156:
	r23 = r21->bytes;
	r22 = 2;
	r22 = r8 << r22;
	r8 = *(int*)(r23 + r22);
	label$3500$160:
	haxe_io_Output_writeUInt16(r5,r8);
	goto label$3500$144;
	label$3500$162:
	goto label$3500$119;
	label$3500$163:
	return;
}

void hxd_fmt_hmd_Writer_write(hxd__fmt__hmd__Writer r0,hxd__fmt__hmd__Data r1) {
	hxd__fmt__hmd__Skin r31;
	bool *r30;
	hxd__fmt__hmd__Model r28;
	String r7, r10;
	hxd__fmt__hmd__Material r23;
	hxd__fmt__hmd__AnimationEvent r38;
	hl__types__ArrayObj r12, r15, r19;
	venum *r24, *r26, *r40;
	haxe__io__Bytes r39, r41;
	bool r35;
	h3d__col__Bounds r22;
	hxd__fmt__hmd__GeometryFormat r20;
	hl__types__ArrayBytes_Int r21;
	hxd__fmt__hmd__Geometry r16;
	hxd__fmt__hmd__AnimationObject r36;
	haxe__io__BytesOutput r4;
	hxd__fmt__hmd__Animation r32;
	haxe__io__Output r2, r13;
	double r25, r33, r34;
	hxd__fmt__hmd__Position r29;
	vdynamic *r11, *r27;
	int *r8;
	varray *r17;
	vbyte *r9;
	int r5, r6, r14, r18, r37;
	r2 = r0->out;
	r4 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
	haxe_io_BytesOutput_new(r4);
	r0->out = ((haxe__io__Output)r4);
	if( r1 == NULL ) hl_null_access();
	r5 = r1->version;
	r0->version = r5;
	r5 = r0->version;
	r6 = 2;
	if( r6 >= r5 ) goto label$3501$17;
	r7 = (String)global$1183;
	r5 = r0->version;
	r8 = &r5;
	r9 = hl_itos(r5,r8);
	r10 = String___alloc__(r9,r5);
	r7 = String___add__(r7,r10);
	hl_throw((vdynamic*)r7);
	label$3501$17:
	r12 = r1->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r12);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r12 = r1->geometries;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->geometries;
	label$3501$27:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$3501$117;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$3501$35;
	r16 = NULL;
	goto label$3501$38;
	label$3501$35:
	r17 = r12->array;
	r11 = ((vdynamic**)(r17 + 1))[r5];
	r16 = (hxd__fmt__hmd__Geometry)r11;
	label$3501$38:
	++r5;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r16->vertexCount;
	haxe_io_Output_writeInt32(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r16->vertexStride;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r15 = r16->vertexFormat;
	if( r15 == NULL ) hl_null_access();
	r6 = r15->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r6 = 0;
	r15 = r16->vertexFormat;
	label$3501$58:
	if( r15 == NULL ) hl_null_access();
	r18 = r15->length;
	if( r6 >= r18 ) goto label$3501$78;
	r18 = r15->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$3501$66;
	r20 = NULL;
	goto label$3501$69;
	label$3501$66:
	r17 = r15->array;
	r11 = ((vdynamic**)(r17 + 1))[r6];
	r20 = (hxd__fmt__hmd__GeometryFormat)r11;
	label$3501$69:
	++r6;
	if( r20 == NULL ) hl_null_access();
	r7 = r20->name;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r14 = r20->format;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r14);
	goto label$3501$58;
	label$3501$78:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r16 == NULL ) hl_null_access();
	r6 = r16->vertexPosition;
	haxe_io_Output_writeInt32(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r21 = r16->indexCounts;
	if( r21 == NULL ) hl_null_access();
	r6 = r21->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r6 = 0;
	r21 = r16->indexCounts;
	label$3501$91:
	if( r21 == NULL ) hl_null_access();
	r18 = r21->length;
	if( r6 >= r18 ) goto label$3501$109;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r14 = r6;
	++r6;
	r18 = r21->length;
	if( ((unsigned)r14) < ((unsigned)r18) ) goto label$3501$103;
	r14 = 0;
	goto label$3501$107;
	label$3501$103:
	r9 = r21->bytes;
	r18 = 2;
	r18 = r14 << r18;
	r14 = *(int*)(r9 + r18);
	label$3501$107:
	haxe_io_Output_writeInt32(r13,r14);
	goto label$3501$91;
	label$3501$109:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r16 == NULL ) hl_null_access();
	r6 = r16->indexPosition;
	haxe_io_Output_writeInt32(r13,r6);
	r22 = r16->bounds;
	hxd_fmt_hmd_Writer_writeBounds(r0,r22);
	goto label$3501$27;
	label$3501$117:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->materials;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->materials;
	label$3501$126:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$3501$174;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$3501$134;
	r23 = NULL;
	goto label$3501$137;
	label$3501$134:
	r17 = r12->array;
	r11 = ((vdynamic**)(r17 + 1))[r5];
	r23 = (hxd__fmt__hmd__Material)r11;
	label$3501$137:
	++r5;
	if( r23 == NULL ) hl_null_access();
	r15 = r23->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r7 = r23->name;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r7 = r23->diffuseTexture;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r24 = r23->blendMode;
	if( r24 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r24);
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = 1;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = 1;
	r25 = (double)r6;
	haxe_io_Output_writeFloat(r13,r25);
	r15 = r23->props;
	if( !r15 ) goto label$3501$173;
	r15 = r23->props;
	if( r15 == NULL ) hl_null_access();
	r26 = (venum*)global$1135;
	r27 = NULL;
	r6 = hl_types_ArrayObj_indexOf(r15,((vdynamic*)r26),r27);
	r14 = 0;
	if( r6 < r14 ) goto label$3501$173;
	r7 = r23->specularTexture;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r7 = r23->normalMap;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	label$3501$173:
	goto label$3501$126;
	label$3501$174:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->models;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->models;
	label$3501$183:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$3501$256;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$3501$191;
	r28 = NULL;
	goto label$3501$194;
	label$3501$191:
	r17 = r12->array;
	r11 = ((vdynamic**)(r17 + 1))[r5];
	r28 = (hxd__fmt__hmd__Model)r11;
	label$3501$194:
	++r5;
	if( r28 == NULL ) hl_null_access();
	r15 = r28->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r7 = r28->name;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r28->parent;
	r14 = 1;
	r6 = r6 + r14;
	haxe_io_Output_writeInt32(r13,r6);
	r7 = r28->follow;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r29 = r28->position;
	r30 = NULL;
	hxd_fmt_hmd_Writer_writePosition(r0,r29,r30);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r28->geometry;
	r14 = 1;
	r6 = r6 + r14;
	haxe_io_Output_writeInt32(r13,r6);
	r6 = r28->geometry;
	r14 = 0;
	if( r6 >= r14 ) goto label$3501$221;
	goto label$3501$183;
	label$3501$221:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r21 = r28->materials;
	if( r21 == NULL ) hl_null_access();
	r6 = r21->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r6 = 0;
	r21 = r28->materials;
	label$3501$229:
	if( r21 == NULL ) hl_null_access();
	r18 = r21->length;
	if( r6 >= r18 ) goto label$3501$247;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r14 = r6;
	++r6;
	r18 = r21->length;
	if( ((unsigned)r14) < ((unsigned)r18) ) goto label$3501$241;
	r14 = 0;
	goto label$3501$245;
	label$3501$241:
	r9 = r21->bytes;
	r18 = 2;
	r18 = r14 << r18;
	r14 = *(int*)(r9 + r18);
	label$3501$245:
	haxe_io_Output_writeInt32(r13,r14);
	goto label$3501$229;
	label$3501$247:
	if( r28 == NULL ) hl_null_access();
	r31 = r28->skin;
	if( r31 ) goto label$3501$253;
	r7 = NULL;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	goto label$3501$255;
	label$3501$253:
	r31 = r28->skin;
	hxd_fmt_hmd_Writer_writeSkin(r0,r31);
	label$3501$255:
	goto label$3501$183;
	label$3501$256:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->animations;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->animations;
	label$3501$265:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$3501$414;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$3501$273;
	r32 = NULL;
	goto label$3501$276;
	label$3501$273:
	r17 = r12->array;
	r11 = ((vdynamic**)(r17 + 1))[r5];
	r32 = (hxd__fmt__hmd__Animation)r11;
	label$3501$276:
	++r5;
	if( r32 == NULL ) hl_null_access();
	r15 = r32->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r7 = r32->name;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r32->frames;
	haxe_io_Output_writeInt32(r13,r6);
	r25 = r32->sampling;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = 0;
	r34 = (double)r6;
	if( r25 != r34 ) goto label$3501$295;
	r6 = 0;
	r33 = (double)r6;
	goto label$3501$296;
	label$3501$295:
	r33 = r25;
	label$3501$296:
	haxe_io_Output_writeFloat(r13,r33);
	r25 = r32->speed;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = 0;
	r34 = (double)r6;
	if( r25 != r34 ) goto label$3501$306;
	r6 = 0;
	r33 = (double)r6;
	goto label$3501$307;
	label$3501$306:
	r33 = r25;
	label$3501$307:
	haxe_io_Output_writeFloat(r13,r33);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r35 = r32->loop;
	if( !r35 ) goto label$3501$314;
	r6 = 1;
	goto label$3501$315;
	label$3501$314:
	r6 = 0;
	label$3501$315:
	r15 = r32->events;
	if( !r15 ) goto label$3501$319;
	r14 = 2;
	goto label$3501$320;
	label$3501$319:
	r14 = 0;
	label$3501$320:
	r6 = r6 | r14;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r32->dataPosition;
	haxe_io_Output_writeInt32(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r15 = r32->objects;
	if( r15 == NULL ) hl_null_access();
	r6 = r15->length;
	haxe_io_Output_writeInt32(r13,r6);
	r6 = 0;
	r15 = r32->objects;
	label$3501$334:
	if( r15 == NULL ) hl_null_access();
	r18 = r15->length;
	if( r6 >= r18 ) goto label$3501$382;
	r18 = r15->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$3501$342;
	r36 = NULL;
	goto label$3501$345;
	label$3501$342:
	r17 = r15->array;
	r11 = ((vdynamic**)(r17 + 1))[r6];
	r36 = (hxd__fmt__hmd__AnimationObject)r11;
	label$3501$345:
	++r6;
	if( r36 == NULL ) hl_null_access();
	r7 = r36->name;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r14 = r36->flags;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r14);
	r14 = r36->flags;
	r18 = 64;
	r14 = r14 & r18;
	r18 = 0;
	if( r14 == r18 ) goto label$3501$381;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r19 = r36->props;
	if( r19 == NULL ) hl_null_access();
	r14 = r19->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r14);
	r14 = 0;
	r19 = r36->props;
	label$3501$366:
	if( r19 == NULL ) hl_null_access();
	r37 = r19->length;
	if( r14 >= r37 ) goto label$3501$381;
	r18 = r14;
	++r14;
	r37 = r19->length;
	if( ((unsigned)r18) < ((unsigned)r37) ) goto label$3501$376;
	r7 = NULL;
	goto label$3501$379;
	label$3501$376:
	r17 = r19->array;
	r11 = ((vdynamic**)(r17 + 1))[r18];
	r7 = (String)r11;
	label$3501$379:
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	goto label$3501$366;
	label$3501$381:
	goto label$3501$334;
	label$3501$382:
	if( r32 == NULL ) hl_null_access();
	r15 = r32->events;
	if( !r15 ) goto label$3501$413;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r15 = r32->events;
	if( r15 == NULL ) hl_null_access();
	r6 = r15->length;
	haxe_io_Output_writeInt32(r13,r6);
	r6 = 0;
	r15 = r32->events;
	label$3501$393:
	if( r15 == NULL ) hl_null_access();
	r18 = r15->length;
	if( r6 >= r18 ) goto label$3501$413;
	r18 = r15->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$3501$401;
	r38 = NULL;
	goto label$3501$404;
	label$3501$401:
	r17 = r15->array;
	r11 = ((vdynamic**)(r17 + 1))[r6];
	r38 = (hxd__fmt__hmd__AnimationEvent)r11;
	label$3501$404:
	++r6;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r38 == NULL ) hl_null_access();
	r14 = r38->frame;
	haxe_io_Output_writeInt32(r13,r14);
	r7 = r38->data;
	hxd_fmt_hmd_Writer_writeName(r0,r7);
	goto label$3501$393;
	label$3501$413:
	goto label$3501$265;
	label$3501$414:
	if( r4 == NULL ) hl_null_access();
	r39 = haxe_io_BytesOutput_getBytes(r4);
	r0->out = r2;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r7 = (String)global$1177;
	r40 = NULL;
	haxe_io_Output_writeString(r13,r7,r40);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r5 = r1->version;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r5);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r39 == NULL ) hl_null_access();
	r5 = r39->length;
	r6 = 12;
	r5 = r5 + r6;
	haxe_io_Output_writeInt32(r13,r5);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	haxe_io_Output_write(r13,r39);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r41 = r1->data;
	if( r41 == NULL ) hl_null_access();
	r5 = r41->length;
	haxe_io_Output_writeInt32(r13,r5);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r41 = r1->data;
	haxe_io_Output_write(r13,r41);
	return;
}

void hxd_fmt_hmd_Writer_new(hxd__fmt__hmd__Writer r0,haxe__io__Output r1) {
	r0->out = r1;
	return;
}

