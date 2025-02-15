﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int h3d_mat_Texture_get_layerCount(h3d__mat__Texture r0) {
	int r1, r2;
	r1 = r0->flags;
	r2 = 2;
	r1 = r1 & r2;
	r2 = 0;
	if( r1 == r2 ) goto label$324$7;
	r1 = 6;
	return r1;
	label$324$7:
	r1 = 1;
	return r1;
}

void h3d_mat_Texture_alloc(h3d__mat__Texture r0) {
	vvirtual *r2;
	h3d__impl__MemoryManager r3;
	r2 = r0->_t;
	if( r2 ) goto label$325$5;
	r3 = r0->mem;
	if( r3 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_allocTexture(r3,r0);
	label$325$5:
	return;
}

bool h3d_mat_Texture_isSRGB(h3d__mat__Texture r0) {
	venum *r2;
	bool r3;
	int r1;
	r2 = r0->format;
	if( r2 == NULL ) hl_null_access();
	r1 = HL__ENUM_INDEX__(r2);
	switch(r1) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			r3 = false;
			return r3;
		case 14:
		case 15:
			r3 = true;
			return r3;
	}
}

void h3d_mat_Texture_checkAlloc(h3d__mat__Texture r0) {
	vvirtual *r2;
	vclosure *r3;
	r2 = r0->_t;
	if( r2 ) goto label$327$8;
	r3 = r0->realloc;
	if( !r3 ) goto label$327$8;
	h3d_mat_Texture_alloc(r0);
	r3 = r0->realloc;
	if( r3 == NULL ) hl_null_access();
	r3->hasValue ? ((void (*)(vdynamic*))r3->fun)((vdynamic*)r3->value) : ((void (*)(void))r3->fun)();
	label$327$8:
	return;
}

h3d__mat__Texture h3d_mat_Texture_clone(h3d__mat__Texture r0,vvirtual* r1) {
	String r4;
	hl__types__ArrayObj r6;
	vvirtual *r3;
	venum *r10, *r14, *r15;
	hl_type *r8;
	h3d__mat__Pass r16;
	h3d__mat__Texture r13;
	varray *r7;
	int r5, r9, r11, r12;
	h3d_mat_Texture_checkAlloc(r0);
	r3 = r0->_t;
	if( r3 ) goto label$328$5;
	r4 = (String)global$603;
	hl_throw((vdynamic*)r4);
	label$328$5:
	r5 = r0->lastFrame;
	h3d_mat_Texture_preventAutoDispose(r0);
	r8 = &type$497;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r6 = hl_types_ArrayObj_alloc(r7);
	r10 = (venum*)global$432;
	r9 = r0->flags;
	r11 = 1;
	if( r10 == NULL ) hl_null_access();
	r12 = HL__ENUM_INDEX__(r10);
	r11 = r11 << r12;
	r9 = r9 & r11;
	r11 = 0;
	if( r9 == r11 ) goto label$328$22;
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r10));
	label$328$22:
	r10 = (venum*)global$600;
	r9 = r0->flags;
	r11 = 1;
	if( r10 == NULL ) hl_null_access();
	r12 = HL__ENUM_INDEX__(r10);
	r11 = r11 << r12;
	r9 = r9 & r11;
	r11 = 0;
	if( r9 == r11 ) goto label$328$33;
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r10));
	label$328$33:
	r10 = (venum*)global$604;
	r9 = r0->flags;
	r11 = 1;
	if( r10 == NULL ) hl_null_access();
	r12 = HL__ENUM_INDEX__(r10);
	r11 = r11 << r12;
	r9 = r9 & r11;
	r11 = 0;
	if( r9 == r11 ) goto label$328$44;
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r10));
	label$328$44:
	r10 = (venum*)global$605;
	r9 = r0->flags;
	r11 = 1;
	if( r10 == NULL ) hl_null_access();
	r12 = HL__ENUM_INDEX__(r10);
	r11 = r11 << r12;
	r9 = r9 & r11;
	r11 = 0;
	if( r9 == r11 ) goto label$328$55;
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r10));
	label$328$55:
	r13 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	r9 = r0->width;
	r11 = r0->height;
	r14 = r0->format;
	h3d_mat_Texture_new(r13,r9,r11,r6,r14,r1);
	r4 = r0->name;
	r13->name = r4;
	r9 = r0->flags;
	r11 = 2;
	r9 = r9 & r11;
	r11 = 0;
	if( r9 == r11 ) goto label$328$71;
	r15 = NULL;
	r16 = NULL;
	h3d_pass_CubeCopy_run(r0,r13,r15,r16);
	goto label$328$74;
	label$328$71:
	r15 = NULL;
	r16 = NULL;
	h3d_pass_Copy_run(r0,r13,r15,r16);
	label$328$74:
	r0->lastFrame = r5;
	return r13;
}

void h3d_mat_Texture_preventAutoDispose(h3d__mat__Texture r0) {
	int r1;
	r1 = 2147483647;
	r0->lastFrame = r1;
	return;
}

void h3d_mat_Texture_waitLoad(h3d__mat__Texture r0,vclosure* r1) {
	hl__types__ArrayObj r5;
	hl_type *r7;
	varray *r6;
	int r3, r4;
	r3 = r0->flags;
	r4 = 512;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 != r4 ) goto label$330$8;
	if( r1 == NULL ) hl_null_access();
	r1->hasValue ? ((void (*)(vdynamic*))r1->fun)((vdynamic*)r1->value) : ((void (*)(void))r1->fun)();
	return;
	label$330$8:
	r5 = r0->waitLoads;
	if( r5 ) goto label$330$15;
	r7 = &type$65;
	r3 = 0;
	r6 = hl_alloc_array(r7,r3);
	r5 = hl_types_ArrayObj_alloc(r6);
	r0->waitLoads = r5;
	label$330$15:
	r5 = r0->waitLoads;
	if( r5 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_push(r5,((vdynamic*)r1));
	return;
}

String h3d_mat_Texture_toString(h3d__mat__Texture r0) {
	String r1, r2, r6;
	int *r4;
	vbyte *r5;
	int r3;
	r1 = r0->name;
	r2 = r0->name;
	if( r2 ) goto label$331$10;
	r2 = (String)global$606;
	r3 = r0->id;
	r4 = &r3;
	r5 = hl_itos(r3,r4);
	r6 = String___alloc__(r5,r3);
	r2 = String___add__(r2,r6);
	r1 = r2;
	label$331$10:
	r6 = (String)global$175;
	r2 = String___add__(r1,r6);
	r3 = r0->width;
	r4 = &r3;
	r5 = hl_itos(r3,r4);
	r6 = String___alloc__(r5,r3);
	r2 = String___add__(r2,r6);
	r6 = (String)global$439;
	r2 = String___add__(r2,r6);
	r3 = r0->height;
	r4 = &r3;
	r5 = hl_itos(r3,r4);
	r6 = String___alloc__(r5,r3);
	r2 = String___add__(r2,r6);
	r6 = (String)global$177;
	r2 = String___add__(r2,r6);
	return r2;
}

void h3d_mat_Texture_setName(h3d__mat__Texture r0,String r1) {
	r0->name = r1;
	return;
}

venum* h3d_mat_Texture_set_mipMap(h3d__mat__Texture r0,venum* r1) {
	int r2, r3;
	r2 = r0->bits;
	r3 = -4;
	r2 = r2 & r3;
	if( r1 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r1);
	r2 = r2 | r3;
	r0->bits = r2;
	r0->mipMap = r1;
	return r1;
}

venum* h3d_mat_Texture_set_filter(h3d__mat__Texture r0,venum* r1) {
	int r2, r3, r4;
	r2 = r0->bits;
	r3 = -25;
	r2 = r2 & r3;
	if( r1 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r1);
	r4 = 3;
	r3 = r3 << r4;
	r2 = r2 | r3;
	r0->bits = r2;
	r0->filter = r1;
	return r1;
}

venum* h3d_mat_Texture_set_wrap(h3d__mat__Texture r0,venum* r1) {
	int r2, r3, r4;
	r2 = r0->bits;
	r3 = -193;
	r2 = r2 & r3;
	if( r1 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r1);
	r4 = 6;
	r3 = r3 << r4;
	r2 = r2 | r3;
	r0->bits = r2;
	r0->wrap = r1;
	return r1;
}

bool h3d_mat_Texture_isDisposed(h3d__mat__Texture r0) {
	vvirtual *r1;
	bool r2;
	vclosure *r3, *r4;
	r1 = r0->_t;
	if( r1 ) goto label$336$9;
	r3 = r0->realloc;
	r4 = NULL;
	if( r3 == r4 ) goto label$336$7;
	r2 = false;
	goto label$336$8;
	label$336$7:
	r2 = true;
	label$336$8:
	return r2;
	label$336$9:
	r2 = false;
	return r2;
}

void h3d_mat_Texture_resize(h3d__mat__Texture r0,int r1,int r2) {
	int r4, r5, r6, r7;
	h3d_mat_Texture_dispose(r0);
	r4 = 1;
	r5 = 1;
	label$337$3:
	if( r4 >= r1 ) goto label$337$9;
	r7 = 1;
	r6 = r4 << r7;
	r4 = r6;
	goto label$337$3;
	label$337$9:
	if( r5 >= r2 ) goto label$337$15;
	r7 = 1;
	r6 = r5 << r7;
	r5 = r6;
	goto label$337$9;
	label$337$15:
	if( r4 != r1 ) goto label$337$17;
	if( r5 == r2 ) goto label$337$22;
	label$337$17:
	r6 = r0->flags;
	r7 = 16;
	r6 = r6 | r7;
	r0->flags = r6;
	goto label$337$26;
	label$337$22:
	r6 = r0->flags;
	r7 = -17;
	r6 = r6 & r7;
	r0->flags = r6;
	label$337$26:
	r0->width = r1;
	r0->height = r2;
	r6 = r0->flags;
	r7 = 32;
	r6 = r6 & r7;
	r7 = 0;
	if( r6 != r7 ) goto label$337$34;
	h3d_mat_Texture_alloc(r0);
	label$337$34:
	return;
}

void h3d_mat_Texture_clear(h3d__mat__Texture r0,int r1,double* r2,vdynamic* r3) {
	String r28;
	hxd__Pixels r21;
	venum *r22;
	haxe__io__Bytes r31;
	h3d__mat__$Texture r23;
	h3d__Engine r8;
	h3d__$Engine r9;
	double r4, r10, r11, r12;
	int *r17, *r18;
	vdynamic *r15, *r19, *r20;
	int r5, r7, r13, r14, r16, r24, r25, r26, r27, r29, r30;
	if( r2 ) goto label$338$3;
	r4 = 1.;
	goto label$338$4;
	label$338$3:
	r4 = *r2;
	label$338$4:
	if( r3 ) goto label$338$7;
	r5 = -1;
	r3 = hl_alloc_dynamic(&type$3);
	r3->v.i = r5;
	label$338$7:
	h3d_mat_Texture_alloc(r0);
	r5 = r0->flags;
	r7 = 1;
	r5 = r5 & r7;
	r7 = 0;
	if( r5 == r7 ) goto label$338$66;
	r9 = (h3d__$Engine)global$38;
	r8 = r9->CURRENT;
	r10 = 0.;
	r11 = 1.;
	if( !(r4 < r10) ) goto label$338$20;
	r12 = r10;
	goto label$338$24;
	label$338$20:
	if( !(r11 < r4) ) goto label$338$23;
	r12 = r11;
	goto label$338$24;
	label$338$23:
	r12 = r4;
	label$338$24:
	r5 = 255;
	r10 = (double)r5;
	r10 = r12 * r10;
	r5 = (int)r10;
	r14 = 24;
	r13 = r5 << r14;
	r7 = r1 | r13;
	r1 = r7;
	r7 = r3 ? r3->v.i : 0;
	r13 = 0;
	if( r7 >= r13 ) goto label$338$52;
	r7 = 0;
	r13 = ((int (*)(h3d__mat__Texture))r0->$type->vobj_proto[0])(r0);
	label$338$37:
	if( r7 >= r13 ) goto label$338$51;
	if( r8 == NULL ) hl_null_access();
	r14 = r7;
	++r7;
	r17 = &r14;
	r18 = NULL;
	h3d_Engine_pushTarget(r8,r0,r17,r18);
	r15 = hl_alloc_dynamic(&type$3);
	r15->v.i = r1;
	r19 = NULL;
	r20 = NULL;
	h3d_Engine_clear(r8,r15,r19,r20);
	h3d_Engine_popTarget(r8);
	goto label$338$37;
	label$338$51:
	goto label$338$65;
	label$338$52:
	if( r8 == NULL ) hl_null_access();
	if( r3 ) goto label$338$56;
	r17 = NULL;
	goto label$338$58;
	label$338$56:
	r7 = r3 ? r3->v.i : 0;
	r17 = &r7;
	label$338$58:
	r18 = NULL;
	h3d_Engine_pushTarget(r8,r0,r17,r18);
	r15 = hl_alloc_dynamic(&type$3);
	r15->v.i = r1;
	r19 = NULL;
	r20 = NULL;
	h3d_Engine_clear(r8,r15,r19,r20);
	h3d_Engine_popTarget(r8);
	label$338$65:
	goto label$338$160;
	label$338$66:
	r5 = r0->width;
	r13 = r0->height;
	r23 = (h3d__mat__$Texture)global$31;
	r22 = r23->nativeFormat;
	r21 = hxd_Pixels_alloc(r5,r13,r22);
	r5 = 0;
	r16 = 255;
	r13 = r1 & r16;
	r24 = 8;
	r16 = r1 >> r24;
	r24 = 255;
	r16 = r16 & r24;
	r25 = 16;
	r24 = r1 >> r25;
	r25 = 255;
	r24 = r24 & r25;
	r25 = 255;
	r11 = (double)r25;
	r10 = r4 * r11;
	r25 = (int)r10;
	r27 = 0;
	if( r25 >= r27 ) goto label$338$91;
	r26 = 0;
	r25 = r26;
	goto label$338$95;
	label$338$91:
	r27 = 255;
	if( r27 >= r25 ) goto label$338$95;
	r26 = 255;
	r25 = r26;
	label$338$95:
	r23 = (h3d__mat__$Texture)global$31;
	r22 = r23->nativeFormat;
	if( r22 == NULL ) hl_null_access();
	r26 = HL__ENUM_INDEX__(r22);
	switch(r26) {
		default:
		case 0:
			r28 = (String)global$607;
			hl_throw((vdynamic*)r28);
		case 1:
			r26 = r24;
			r24 = r13;
			r13 = r26;
			goto label$338$106;
		case 2:
			break;
	}
	label$338$106:
	r26 = 0;
	r27 = r0->width;
	r29 = r0->height;
	r27 = r27 * r29;
	label$338$110:
	if( r26 >= r27 ) goto label$338$135;
	++r26;
	if( r21 == NULL ) hl_null_access();
	r31 = r21->bytes;
	if( r31 == NULL ) hl_null_access();
	r29 = r5;
	++r5;
	haxe_io_Bytes_set(r31,r29,r24);
	r31 = r21->bytes;
	if( r31 == NULL ) hl_null_access();
	r29 = r5;
	++r5;
	haxe_io_Bytes_set(r31,r29,r16);
	r31 = r21->bytes;
	if( r31 == NULL ) hl_null_access();
	r29 = r5;
	++r5;
	haxe_io_Bytes_set(r31,r29,r13);
	r31 = r21->bytes;
	if( r31 == NULL ) hl_null_access();
	r29 = r5;
	++r5;
	haxe_io_Bytes_set(r31,r29,r25);
	goto label$338$110;
	label$338$135:
	r26 = r3 ? r3->v.i : 0;
	r27 = 0;
	if( r26 >= r27 ) goto label$338$150;
	r26 = 0;
	r27 = ((int (*)(h3d__mat__Texture))r0->$type->vobj_proto[0])(r0);
	label$338$140:
	if( r26 >= r27 ) goto label$338$149;
	r29 = 0;
	r17 = &r29;
	r30 = r26;
	++r26;
	r18 = &r30;
	h3d_mat_Texture_uploadPixels(r0,r21,r17,r18);
	goto label$338$140;
	label$338$149:
	goto label$338$158;
	label$338$150:
	r26 = 0;
	r17 = &r26;
	if( r3 ) goto label$338$155;
	r18 = NULL;
	goto label$338$157;
	label$338$155:
	r27 = r3 ? r3->v.i : 0;
	r18 = &r27;
	label$338$157:
	h3d_mat_Texture_uploadPixels(r0,r21,r17,r18);
	label$338$158:
	if( r21 == NULL ) hl_null_access();
	hxd_Pixels_dispose(r21);
	label$338$160:
	return;
}

void h3d_mat_Texture_checkSize(h3d__mat__Texture r0,int r1,int r2,int r3) {
	String r7, r10;
	int *r8;
	vbyte *r9;
	int r5, r6;
	r6 = r0->width;
	r6 = r6 >> r3;
	if( r1 != r6 ) goto label$339$6;
	r6 = r0->height;
	r6 = r6 >> r3;
	if( r2 == r6 ) goto label$339$36;
	label$339$6:
	r7 = (String)global$608;
	r5 = r1;
	r8 = &r5;
	r9 = hl_itos(r5,r8);
	r10 = String___alloc__(r9,r5);
	r7 = String___add__(r7,r10);
	r10 = (String)global$439;
	r7 = String___add__(r7,r10);
	r5 = r2;
	r8 = &r5;
	r9 = hl_itos(r5,r8);
	r10 = String___alloc__(r9,r5);
	r7 = String___add__(r7,r10);
	r10 = (String)global$609;
	r7 = String___add__(r7,r10);
	r5 = r0->width;
	r5 = r5 >> r3;
	r8 = &r5;
	r9 = hl_itos(r5,r8);
	r10 = String___alloc__(r9,r5);
	r7 = String___add__(r7,r10);
	r10 = (String)global$439;
	r7 = String___add__(r7,r10);
	r5 = r0->height;
	r5 = r5 >> r3;
	r8 = &r5;
	r9 = hl_itos(r5,r8);
	r10 = String___alloc__(r9,r5);
	r7 = String___add__(r7,r10);
	hl_throw((vdynamic*)r7);
	label$339$36:
	return;
}

void h3d_mat_Texture_checkMipMapGen(h3d__mat__Texture r0,int r1,int r2) {
	h3d__impl__MemoryManager r7;
	h3d__impl__Driver r6;
	int r4, r5;
	r5 = 0;
	if( r1 != r5 ) goto label$340$24;
	r4 = r0->flags;
	r5 = 4;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$340$24;
	r4 = r0->flags;
	r5 = 8;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$340$24;
	r4 = r0->flags;
	r5 = 2;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$340$19;
	r5 = 5;
	if( r2 != r5 ) goto label$340$24;
	label$340$19:
	r7 = r0->mem;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->driver;
	if( r6 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__mat__Texture))r6->$type->vobj_proto[5])(r6,r0);
	label$340$24:
	return;
}

void h3d_mat_Texture_uploadBitmap(h3d__mat__Texture r0,hxd__BitmapData r1,int* r2,int* r3) {
	String r12, r14;
	h3d__impl__MemoryManager r16;
	hxd__BitmapInnerDataImpl r8;
	h3d__impl__Driver r15;
	vbyte *r13;
	int r4, r5, r7, r9, r10, r11;
	if( r2 ) goto label$341$3;
	r4 = 0;
	goto label$341$4;
	label$341$3:
	r4 = *r2;
	label$341$4:
	if( r3 ) goto label$341$7;
	r5 = 0;
	goto label$341$8;
	label$341$7:
	r5 = *r3;
	label$341$8:
	h3d_mat_Texture_alloc(r0);
	if( r1 == NULL ) hl_null_access();
	r8 = r1->data;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->width;
	r8 = r1->data;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->height;
	r11 = r0->width;
	r11 = r11 >> r4;
	if( r7 != r11 ) goto label$341$22;
	r11 = r0->height;
	r11 = r11 >> r4;
	if( r9 == r11 ) goto label$341$52;
	label$341$22:
	r12 = (String)global$608;
	r10 = r7;
	r2 = &r10;
	r13 = hl_itos(r10,r2);
	r14 = String___alloc__(r13,r10);
	r12 = String___add__(r12,r14);
	r14 = (String)global$439;
	r12 = String___add__(r12,r14);
	r10 = r9;
	r2 = &r10;
	r13 = hl_itos(r10,r2);
	r14 = String___alloc__(r13,r10);
	r12 = String___add__(r12,r14);
	r14 = (String)global$609;
	r12 = String___add__(r12,r14);
	r10 = r0->width;
	r10 = r10 >> r4;
	r2 = &r10;
	r13 = hl_itos(r10,r2);
	r14 = String___alloc__(r13,r10);
	r12 = String___add__(r12,r14);
	r14 = (String)global$439;
	r12 = String___add__(r12,r14);
	r10 = r0->height;
	r10 = r10 >> r4;
	r2 = &r10;
	r13 = hl_itos(r10,r2);
	r14 = String___alloc__(r13,r10);
	r12 = String___add__(r12,r14);
	hl_throw((vdynamic*)r12);
	label$341$52:
	r16 = r0->mem;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->driver;
	if( r15 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__mat__Texture,hxd__BitmapData,int,int))r15->$type->vobj_proto[40])(r15,r0,r1,r4,r5);
	r7 = r0->flags;
	r9 = 256;
	r7 = r7 | r9;
	r0->flags = r7;
	h3d_mat_Texture_checkMipMapGen(r0,r4,r5);
	return;
}

void h3d_mat_Texture_uploadPixels(h3d__mat__Texture r0,hxd__Pixels r1,int* r2,int* r3) {
	String r11, r13;
	h3d__impl__MemoryManager r15;
	h3d__impl__Driver r14;
	vbyte *r12;
	int r4, r5, r7, r8, r9, r10;
	if( r2 ) goto label$342$3;
	r4 = 0;
	goto label$342$4;
	label$342$3:
	r4 = *r2;
	label$342$4:
	if( r3 ) goto label$342$7;
	r5 = 0;
	goto label$342$8;
	label$342$7:
	r5 = *r3;
	label$342$8:
	h3d_mat_Texture_alloc(r0);
	if( r1 == NULL ) hl_null_access();
	r7 = r1->width;
	r8 = r1->height;
	r10 = r0->width;
	r10 = r10 >> r4;
	if( r7 != r10 ) goto label$342$18;
	r10 = r0->height;
	r10 = r10 >> r4;
	if( r8 == r10 ) goto label$342$48;
	label$342$18:
	r11 = (String)global$608;
	r9 = r7;
	r2 = &r9;
	r12 = hl_itos(r9,r2);
	r13 = String___alloc__(r12,r9);
	r11 = String___add__(r11,r13);
	r13 = (String)global$439;
	r11 = String___add__(r11,r13);
	r9 = r8;
	r2 = &r9;
	r12 = hl_itos(r9,r2);
	r13 = String___alloc__(r12,r9);
	r11 = String___add__(r11,r13);
	r13 = (String)global$609;
	r11 = String___add__(r11,r13);
	r9 = r0->width;
	r9 = r9 >> r4;
	r2 = &r9;
	r12 = hl_itos(r9,r2);
	r13 = String___alloc__(r12,r9);
	r11 = String___add__(r11,r13);
	r13 = (String)global$439;
	r11 = String___add__(r11,r13);
	r9 = r0->height;
	r9 = r9 >> r4;
	r2 = &r9;
	r12 = hl_itos(r9,r2);
	r13 = String___alloc__(r12,r9);
	r11 = String___add__(r11,r13);
	hl_throw((vdynamic*)r11);
	label$342$48:
	r15 = r0->mem;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->driver;
	if( r14 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__mat__Texture,hxd__Pixels,int,int))r14->$type->vobj_proto[41])(r14,r0,r1,r4,r5);
	r7 = r0->flags;
	r8 = 256;
	r7 = r7 | r8;
	r0->flags = r7;
	h3d_mat_Texture_checkMipMapGen(r0,r4,r5);
	return;
}

void h3d_mat_Texture_dispose(h3d__mat__Texture r0) {
	vvirtual *r2;
	h3d__impl__MemoryManager r3;
	r2 = r0->_t;
	if( !r2 ) goto label$343$5;
	r3 = r0->mem;
	if( r3 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_deleteTexture(r3,r0);
	label$343$5:
	return;
}

void h3d_mat_Texture_swapTexture(h3d__mat__Texture r0,h3d__mat__Texture r1) {
	String r5;
	vvirtual *r3, *r6;
	vclosure *r4;
	h3d_mat_Texture_checkAlloc(r0);
	if( r1 == NULL ) hl_null_access();
	h3d_mat_Texture_checkAlloc(r1);
	r3 = r0->_t;
	if( r3 ) goto label$344$7;
	r4 = r0->realloc;
	if( !r4 ) goto label$344$11;
	label$344$7:
	r3 = r1->_t;
	if( r3 ) goto label$344$13;
	r4 = r1->realloc;
	if( r4 ) goto label$344$13;
	label$344$11:
	r5 = (String)global$610;
	hl_throw((vdynamic*)r5);
	label$344$13:
	r3 = r0->_t;
	r6 = r1->_t;
	r0->_t = r6;
	r1->_t = r3;
	return;
}

hxd__Pixels h3d_mat_Texture_capturePixels(h3d__mat__Texture r0,int* r1,int* r2) {
	hxd__Pixels r7;
	h3d__impl__MemoryManager r9;
	h3d__impl__Driver r8;
	int r3, r4, r5;
	if( r1 ) goto label$345$3;
	r3 = 0;
	goto label$345$4;
	label$345$3:
	r3 = *r1;
	label$345$4:
	if( r2 ) goto label$345$7;
	r4 = 0;
	goto label$345$8;
	label$345$7:
	r4 = *r2;
	label$345$8:
	r5 = r0->lastFrame;
	h3d_mat_Texture_preventAutoDispose(r0);
	r9 = r0->mem;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->driver;
	if( r8 == NULL ) hl_null_access();
	r7 = ((hxd__Pixels (*)(h3d__impl__Driver,h3d__mat__Texture,int,int))r8->$type->vobj_proto[9])(r8,r0,r3,r4);
	r0->lastFrame = r5;
	return r7;
}

vbyte* h3d_mat_Texture___string(h3d__mat__Texture r0) {
	String r2;
	vbyte *r1;
	r2 = ((String (*)(h3d__mat__Texture))r0->$type->vobj_proto[2])(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void h3d_mat_Texture_new(h3d__mat__Texture r0,int r1,int r2,hl__types__ArrayObj r3,venum* r4,vvirtual* r5) {
	venum *r10, *r17, *r21, *r22, *r23;
	h3d__mat__$Texture r11;
	h3d__Engine r7;
	h3d__$Engine r8;
	h3d__impl__MemoryManager r6;
	vclosure *r20;
	vdynamic *r18;
	varray *r19;
	int r12, r13, r14, r15, r16;
	r8 = (h3d__$Engine)global$38;
	r7 = r8->CURRENT;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->mem;
	r0->mem = r6;
	if( r4 ) goto label$458$9;
	r11 = (h3d__mat__$Texture)global$31;
	r10 = r11->nativeFormat;
	r4 = r10;
	label$458$9:
	r11 = (h3d__mat__$Texture)global$31;
	r12 = r11->UID;
	++r12;
	r11->UID = r12;
	r0->id = r12;
	r0->format = r4;
	r12 = 0;
	r0->flags = r12;
	if( !r3 ) goto label$458$40;
	r12 = 0;
	label$458$19:
	if( r3 == NULL ) hl_null_access();
	r14 = r3->length;
	if( r12 >= r14 ) goto label$458$40;
	r13 = r0->flags;
	r14 = 1;
	r15 = r12;
	++r12;
	r16 = r3->length;
	if( ((unsigned)r15) < ((unsigned)r16) ) goto label$458$31;
	r17 = NULL;
	goto label$458$34;
	label$458$31:
	r19 = r3->array;
	r18 = ((vdynamic**)(r19 + 1))[r15];
	r17 = (venum*)r18;
	label$458$34:
	if( r17 == NULL ) hl_null_access();
	r15 = HL__ENUM_INDEX__(r17);
	r14 = r14 << r15;
	r13 = r13 | r14;
	r0->flags = r13;
	goto label$458$19;
	label$458$40:
	r12 = 1;
	r13 = 1;
	label$458$42:
	if( r12 >= r1 ) goto label$458$48;
	r15 = 1;
	r14 = r12 << r15;
	r12 = r14;
	goto label$458$42;
	label$458$48:
	if( r13 >= r2 ) goto label$458$54;
	r15 = 1;
	r14 = r13 << r15;
	r13 = r14;
	goto label$458$48;
	label$458$54:
	if( r12 != r1 ) goto label$458$56;
	if( r13 == r2 ) goto label$458$60;
	label$458$56:
	r14 = r0->flags;
	r15 = 16;
	r14 = r14 | r15;
	r0->flags = r14;
	label$458$60:
	r14 = r0->flags;
	r15 = 1;
	r14 = r14 & r15;
	r15 = 0;
	if( r14 == r15 ) goto label$458$67;
	r20 = &cl$2837;
	r0->realloc = r20;
	label$458$67:
	r0->width = r1;
	r0->height = r2;
	r14 = r0->flags;
	r15 = 4;
	r14 = r14 & r15;
	r15 = 0;
	if( r14 == r15 ) goto label$458$76;
	r21 = (venum*)global$601;
	goto label$458$77;
	label$458$76:
	r21 = (venum*)global$602;
	label$458$77:
	r21 = h3d_mat_Texture_set_mipMap(r0,r21);
	r22 = (venum*)global$419;
	r22 = h3d_mat_Texture_set_filter(r0,r22);
	r23 = (venum*)global$427;
	r23 = h3d_mat_Texture_set_wrap(r0,r23);
	r14 = r0->bits;
	r15 = 32767;
	r14 = r14 & r15;
	r0->bits = r14;
	r14 = r0->flags;
	r15 = 32;
	r14 = r14 & r15;
	r15 = 0;
	if( r14 != r15 ) goto label$458$92;
	h3d_mat_Texture_alloc(r0);
	label$458$92:
	return;
}

void h3d_mat_Texture_allocChecker(h3d__mat__Texture r0,int r1) {
	hxd__BitmapData r2;
	hxd__BitmapInnerDataImpl r16;
	int *r14, *r15;
	int r3, r4, r6, r7, r8, r9, r10, r11, r12, r13;
	r2 = (hxd__BitmapData)hl_alloc_obj(hxd__BitmapData__val);
	hxd_BitmapData_new(r2,r1,r1);
	r3 = -1;
	hxd_BitmapData_clear(r2,r3);
	r3 = 0;
	r6 = 1;
	r4 = r1 >> r6;
	label$457$7:
	if( r3 >= r4 ) goto label$457$31;
	r6 = r3;
	++r3;
	r7 = 0;
	r9 = 1;
	r8 = r1 >> r9;
	label$457$14:
	if( r7 >= r8 ) goto label$457$30;
	r9 = r7;
	++r7;
	if( r2 == NULL ) hl_null_access();
	r12 = -16777216;
	hxd_BitmapData_setPixel(r2,r6,r9,r12);
	r12 = 1;
	r11 = r1 >> r12;
	r10 = r6 + r11;
	r13 = 1;
	r12 = r1 >> r13;
	r11 = r9 + r12;
	r12 = -16777216;
	hxd_BitmapData_setPixel(r2,r10,r11,r12);
	goto label$457$14;
	label$457$30:
	goto label$457$7;
	label$457$31:
	if( r0 == NULL ) hl_null_access();
	r14 = NULL;
	r15 = NULL;
	h3d_mat_Texture_uploadBitmap(r0,r2,r14,r15);
	if( r2 == NULL ) hl_null_access();
	r16 = NULL;
	r2->data = r16;
	return;
}

void h3d_mat_Texture_allocNoise(h3d__mat__Texture r0,int r1) {
	hxd__BitmapData r2;
	hxd__BitmapInnerDataImpl r14;
	int *r12, *r13;
	int r3, r4, r6, r7, r8, r9, r10, r11;
	r2 = (hxd__BitmapData)hl_alloc_obj(hxd__BitmapData__val);
	hxd_BitmapData_new(r2,r1,r1);
	r3 = 0;
	label$456$3:
	if( r3 >= r1 ) goto label$456$26;
	r4 = r3;
	++r3;
	r6 = 0;
	label$456$8:
	if( r6 >= r1 ) goto label$456$25;
	r7 = 256;
	r7 = Std_random(r7);
	if( r2 == NULL ) hl_null_access();
	r8 = r6;
	++r6;
	r9 = -16777216;
	r9 = r9 | r7;
	r11 = 8;
	r10 = r7 << r11;
	r9 = r9 | r10;
	r11 = 16;
	r10 = r7 << r11;
	r9 = r9 | r10;
	hxd_BitmapData_setPixel(r2,r4,r8,r9);
	goto label$456$8;
	label$456$25:
	goto label$456$3;
	label$456$26:
	if( r0 == NULL ) hl_null_access();
	r12 = NULL;
	r13 = NULL;
	h3d_mat_Texture_uploadBitmap(r0,r2,r12,r13);
	if( r2 == NULL ) hl_null_access();
	r14 = NULL;
	r2->data = r14;
	return;
}

h3d__mat__Texture h3d_mat_Texture_genNoise(int r0) {
	vdynobj *r13;
	haxe__ds__ObjectMap r9;
	hl__types__ArrayObj r14;
	vvirtual *r11, *r20;
	venum *r18, *r19, *r21;
	hl_type *r16;
	haxe__ds__IntMap r5;
	h3d__mat__$Texture r6;
	h3d__Engine r1;
	h3d__$Engine r2;
	vclosure *r12;
	vdynamic *r4, *r8;
	int r17;
	varray *r15;
	h3d__mat__Texture r7, r10;
	r2 = (h3d__$Engine)global$38;
	r1 = r2->CURRENT;
	r6 = (h3d__mat__$Texture)global$31;
	r5 = r6->noiseTextureKeys;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_IntMap_get(r5,r0);
	if( r4 ) goto label$455$9;
	r7 = NULL;
	goto label$455$14;
	label$455$9:
	if( r1 == NULL ) hl_null_access();
	r9 = r1->resCache;
	if( r9 == NULL ) hl_null_access();
	r8 = haxe_ds_ObjectMap_get(r9,r4);
	r7 = (h3d__mat__Texture)hl_dyn_castp(&r8,&type$9,&type$93);
	label$455$14:
	if( !r7 ) goto label$455$21;
	if( r7 == NULL ) hl_null_access();
	r11 = r7->_t;
	if( r11 ) goto label$455$20;
	r12 = r7->realloc;
	if( !r12 ) goto label$455$21;
	label$455$20:
	return r7;
	label$455$21:
	if( r4 ) goto label$455$28;
	r13 = hl_alloc_dynobj();
	r4 = ((vdynamic*)r13);
	r6 = (h3d__mat__$Texture)global$31;
	r5 = r6->noiseTextureKeys;
	if( r5 == NULL ) hl_null_access();
	haxe_ds_IntMap_set(r5,r0,((vdynamic*)r13));
	label$455$28:
	r10 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	r16 = &type$497;
	r17 = 1;
	r15 = hl_alloc_array(r16,r17);
	r18 = (venum*)global$465;
	r17 = 0;
	((venum**)(r15 + 1))[r17] = r18;
	r14 = hl_types_ArrayObj_alloc(r15);
	r19 = NULL;
	r20 = NULL;
	h3d_mat_Texture_new(r10,r0,r0,r14,r19,r20);
	r21 = hl_alloc_enum(&type$2295,0);
	((Enum$2295*)r21)->p0 = (h3d__mat__Texture)r10;
	((Enum$2295*)r21)->p1 = (int)r0;
	r12 = hl_alloc_closure_ptr(&type$2294,fun$2836,r21);
	r10->realloc = r12;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->resCache;
	if( r9 == NULL ) hl_null_access();
	haxe_ds_ObjectMap_set(r9,r4,((vdynamic*)r10));
	return r10;
}

h3d__mat__Texture h3d_mat_Texture_genChecker(int r0) {
	vdynobj *r13;
	haxe__ds__ObjectMap r9;
	hl__types__ArrayObj r14;
	vvirtual *r11, *r20;
	venum *r18, *r19, *r21;
	hl_type *r16;
	haxe__ds__IntMap r5;
	h3d__mat__$Texture r6;
	h3d__Engine r1;
	h3d__$Engine r2;
	vclosure *r12;
	vdynamic *r4, *r8;
	int r17;
	varray *r15;
	h3d__mat__Texture r7, r10;
	r2 = (h3d__$Engine)global$38;
	r1 = r2->CURRENT;
	r6 = (h3d__mat__$Texture)global$31;
	r5 = r6->checkerTextureKeys;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_IntMap_get(r5,r0);
	if( r4 ) goto label$454$9;
	r7 = NULL;
	goto label$454$14;
	label$454$9:
	if( r1 == NULL ) hl_null_access();
	r9 = r1->resCache;
	if( r9 == NULL ) hl_null_access();
	r8 = haxe_ds_ObjectMap_get(r9,r4);
	r7 = (h3d__mat__Texture)hl_dyn_castp(&r8,&type$9,&type$93);
	label$454$14:
	if( !r7 ) goto label$454$21;
	if( r7 == NULL ) hl_null_access();
	r11 = r7->_t;
	if( r11 ) goto label$454$20;
	r12 = r7->realloc;
	if( !r12 ) goto label$454$21;
	label$454$20:
	return r7;
	label$454$21:
	if( r4 ) goto label$454$28;
	r13 = hl_alloc_dynobj();
	r4 = ((vdynamic*)r13);
	r6 = (h3d__mat__$Texture)global$31;
	r5 = r6->checkerTextureKeys;
	if( r5 == NULL ) hl_null_access();
	haxe_ds_IntMap_set(r5,r0,((vdynamic*)r13));
	label$454$28:
	r10 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	r16 = &type$497;
	r17 = 1;
	r15 = hl_alloc_array(r16,r17);
	r18 = (venum*)global$465;
	r17 = 0;
	((venum**)(r15 + 1))[r17] = r18;
	r14 = hl_types_ArrayObj_alloc(r15);
	r19 = NULL;
	r20 = NULL;
	h3d_mat_Texture_new(r10,r0,r0,r14,r19,r20);
	r21 = hl_alloc_enum(&type$2295,0);
	((Enum$2295*)r21)->p0 = (h3d__mat__Texture)r10;
	((Enum$2295*)r21)->p1 = (int)r0;
	r12 = hl_alloc_closure_ptr(&type$2294,fun$2835,r21);
	r10->realloc = r12;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->resCache;
	if( r9 == NULL ) hl_null_access();
	haxe_ds_ObjectMap_set(r9,r4,((vdynamic*)r10));
	return r10;
}

h3d__mat__Texture h3d_mat_Texture_defaultCubeTexture() {
	haxe__ds__ObjectMap r4;
	vvirtual *r16;
	hl__types__ArrayObj r10;
	venum *r14, *r15;
	hl_type *r12;
	h3d__mat__$Texture r5;
	h3d__Engine r0;
	h3d__$Engine r1;
	vclosure *r19;
	double *r17;
	vdynamic *r3, *r18;
	varray *r11;
	int r8, r9, r13;
	h3d__mat__Texture r6, r7;
	r1 = (h3d__$Engine)global$38;
	r0 = r1->CURRENT;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->resCache;
	if( r4 == NULL ) hl_null_access();
	r5 = (h3d__mat__$Texture)global$31;
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r5));
	r6 = (h3d__mat__Texture)hl_dyn_castp(&r3,&type$9,&type$93);
	if( !r6 ) goto label$453$10;
	return r6;
	label$453$10:
	r7 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	r8 = 1;
	r9 = 1;
	r12 = &type$497;
	r13 = 1;
	r11 = hl_alloc_array(r12,r13);
	r14 = (venum*)global$600;
	r13 = 0;
	((venum**)(r11 + 1))[r13] = r14;
	r10 = hl_types_ArrayObj_alloc(r11);
	r15 = NULL;
	r16 = NULL;
	h3d_mat_Texture_new(r7,r8,r9,r10,r15,r16);
	r8 = 2105376;
	r17 = NULL;
	r18 = NULL;
	h3d_mat_Texture_clear(r7,r8,r17,r18);
	r19 = hl_alloc_closure_ptr(&type$2293,fun$2834,r7);
	r7->realloc = r19;
	r4 = r0->resCache;
	if( r4 == NULL ) hl_null_access();
	r5 = (h3d__mat__$Texture)global$31;
	haxe_ds_ObjectMap_set(r4,((vdynamic*)r5),((vdynamic*)r7));
	return r7;
}

h3d__mat__Texture h3d_mat_Texture_fromColor(int r0,vdynamic* r1,vvirtual* r2) {
	hl__types__ArrayObj r16;
	venum *r17, *r21;
	haxe__ds__IntMap r13;
	h3d__Engine r4;
	h3d__$Engine r5;
	vclosure *r20;
	double r3, r8;
	double *r18;
	vdynamic *r12, *r19;
	h3d__mat__Texture r14, r15;
	int r7, r9, r10, r11;
	if( r1 ) goto label$452$3;
	r3 = 1.;
	r1 = hl_alloc_dynamic(&type$6);
	r1->v.d = r3;
	label$452$3:
	r5 = (h3d__$Engine)global$38;
	r4 = r5->CURRENT;
	r3 = r1 ? r1->v.d : 0;
	r7 = 255;
	r8 = (double)r7;
	r3 = r3 * r8;
	r7 = (int)r3;
	r10 = 0;
	if( r7 >= r10 ) goto label$452$15;
	r9 = 0;
	r7 = r9;
	goto label$452$19;
	label$452$15:
	r10 = 255;
	if( r10 >= r7 ) goto label$452$19;
	r9 = 255;
	r7 = r9;
	label$452$19:
	r10 = 16777215;
	r9 = r0 & r10;
	r11 = 24;
	r10 = r7 << r11;
	r9 = r9 | r10;
	if( r4 == NULL ) hl_null_access();
	r13 = r4->textureColorCache;
	if( r13 == NULL ) hl_null_access();
	r12 = haxe_ds_IntMap_get(r13,r9);
	r14 = (h3d__mat__Texture)r12;
	if( !r14 ) goto label$452$31;
	return r14;
	label$452$31:
	r15 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	r10 = 1;
	r11 = 1;
	r16 = NULL;
	r17 = NULL;
	h3d_mat_Texture_new(r15,r10,r11,r16,r17,r2);
	if( r1 ) goto label$452$40;
	r18 = NULL;
	goto label$452$42;
	label$452$40:
	r3 = r1 ? r1->v.d : 0;
	r18 = &r3;
	label$452$42:
	r19 = NULL;
	h3d_mat_Texture_clear(r15,r0,r18,r19);
	r21 = hl_alloc_enum(&type$2292,0);
	((Enum$2292*)r21)->p0 = (int)r0;
	((Enum$2292*)r21)->p1 = (vdynamic*)r1;
	((Enum$2292*)r21)->p2 = (h3d__mat__Texture)r15;
	r20 = hl_alloc_closure_ptr(&type$2291,fun$2833,r21);
	r15->realloc = r20;
	r13 = r4->textureColorCache;
	if( r13 == NULL ) hl_null_access();
	haxe_ds_IntMap_set(r13,r9,((vdynamic*)r15));
	return r15;
}

h3d__mat__Texture h3d_mat_Texture_fromPixels(hxd__Pixels r0,vvirtual* r1) {
	hl__types__ArrayObj r5;
	venum *r6;
	int *r8, *r9;
	int r3, r4;
	h3d__mat__Texture r2;
	r2 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	if( r0 == NULL ) hl_null_access();
	r3 = r0->width;
	r4 = r0->height;
	r5 = NULL;
	r6 = NULL;
	h3d_mat_Texture_new(r2,r3,r4,r5,r6,r1);
	r8 = NULL;
	r9 = NULL;
	h3d_mat_Texture_uploadPixels(r2,r0,r8,r9);
	return r2;
}

h3d__mat__Texture h3d_mat_Texture_fromBitmap(hxd__BitmapData r0,vvirtual* r1) {
	hl__types__ArrayObj r6;
	venum *r7;
	hxd__BitmapInnerDataImpl r4;
	int *r9, *r10;
	int r3, r5;
	h3d__mat__Texture r2;
	r2 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	if( r0 == NULL ) hl_null_access();
	r4 = r0->data;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->width;
	r4 = r0->data;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->height;
	r6 = NULL;
	r7 = NULL;
	h3d_mat_Texture_new(r2,r3,r5,r6,r7,r1);
	r9 = NULL;
	r10 = NULL;
	h3d_mat_Texture_uploadBitmap(r2,r0,r9,r10);
	return r2;
}

