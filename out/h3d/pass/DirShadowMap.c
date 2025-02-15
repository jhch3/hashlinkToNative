﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

venum* h3d_pass_DirShadowMap_set_mode(h3d__pass__DirShadowMap r0,venum* r1) {
	venum *r4;
	bool r3;
	h3d__shader__DirShadow r2;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r3 = true;
	r2->constModified = r3;
	r4 = (venum*)global$646;
	if( r1 != r4 ) goto label$2773$8;
	r3 = false;
	goto label$2773$9;
	label$2773$8:
	r3 = true;
	label$2773$9:
	r2->enable__ = r3;
	r0->mode = r1;
	return r1;
}

int h3d_pass_DirShadowMap_set_size(h3d__pass__DirShadowMap r0,int r1) {
	h3d__pass__Border r3;
	int *r5;
	int r4;
	r3 = r0->border;
	if( !r3 ) goto label$2774$11;
	r4 = r0->size;
	if( r4 == r1 ) goto label$2774$11;
	r3 = r0->border;
	if( r3 == NULL ) hl_null_access();
	h3d_pass_Border_dispose(r3);
	r3 = (h3d__pass__Border)hl_alloc_obj(h3d__pass__Border__val);
	r5 = NULL;
	h3d_pass_Border_new(r3,r1,r1,r5);
	r0->border = r3;
	label$2774$11:
	r4 = h3d_pass_Shadows_set_size(((h3d__pass__Shadows)r0),r1);
	return r4;
}

void h3d_pass_DirShadowMap_dispose(h3d__pass__DirShadowMap r0) {
	h3d__mat__DepthBuffer r3;
	bool r2;
	h3d_pass_Shadows_dispose(((h3d__pass__Shadows)r0));
	r2 = r0->customDepth;
	if( !r2 ) goto label$2775$8;
	r3 = r0->depth;
	if( !r3 ) goto label$2775$8;
	r3 = r0->depth;
	if( r3 == NULL ) hl_null_access();
	h3d_mat_DepthBuffer_dispose(r3);
	label$2775$8:
	return;
}

h3d__mat__Texture h3d_pass_DirShadowMap_getShadowTex(h3d__pass__DirShadowMap r0) {
	h3d__shader__DirShadow r2;
	h3d__mat__Texture r1;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->shadowMap__;
	return r1;
}

void h3d_pass_DirShadowMap_setGlobals(h3d__pass__DirShadowMap r0) {
	h3d__pass__ShaderManager r12;
	venum *r2, *r3;
	bool r4;
	h3d__col__Bounds r6;
	haxe__ds__IntMap r10;
	h3d__Camera r7;
	hxsl__Globals r11;
	vclosure *r9;
	double r8;
	h3d__scene__RenderContext r5;
	h3d__Matrix r14;
	int r13;
	h3d_pass_Default_setGlobals(((h3d__pass__Default)r0));
	r2 = r0->mode;
	r3 = (venum*)global$657;
	if( r2 != r3 ) goto label$2778$8;
	r5 = r0->ctx;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->computingStatic;
	if( !r4 ) goto label$2778$31;
	label$2778$8:
	r7 = r0->lightCamera;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->orthoBounds;
	if( r6 == NULL ) hl_null_access();
	r8 = 1e+020;
	r6->xMin = r8;
	r8 = -1e+020;
	r6->xMax = r8;
	r8 = 1e+020;
	r6->yMin = r8;
	r8 = -1e+020;
	r6->yMax = r8;
	r8 = 1e+020;
	r6->zMin = r8;
	r8 = -1e+020;
	r6->zMax = r8;
	r9 = r0->calcShadowBounds;
	if( r9 == NULL ) hl_null_access();
	r7 = r0->lightCamera;
	r9->hasValue ? ((void (*)(vdynamic*,h3d__Camera))r9->fun)((vdynamic*)r9->value,r7) : ((void (*)(h3d__Camera))r9->fun)(r7);
	r7 = r0->lightCamera;
	if( r7 == NULL ) hl_null_access();
	h3d_Camera_update(r7);
	label$2778$31:
	r12 = r0->manager;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->globals;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->map;
	if( r10 == NULL ) hl_null_access();
	r13 = r0->cameraViewProj_id;
	r14 = h3d_pass_Shadows_getShadowProj(((h3d__pass__Shadows)r0));
	haxe_ds_IntMap_set(r10,r13,((vdynamic*)r14));
	return;
}

void h3d_pass_DirShadowMap_syncShader(h3d__pass__DirShadowMap r0,h3d__mat__Texture r1) {
	venum *r5, *r6, *r7;
	bool r4;
	h3d__mat__$Texture r8;
	double r9;
	h3d__Matrix r10;
	h3d__shader__DirShadow r2;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r4 = true;
	r2->constModified = r4;
	r2->shadowMap__ = r1;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r4 = true;
	r2->constModified = r4;
	r6 = r0->format;
	r8 = (h3d__mat__$Texture)global$31;
	r7 = r8->nativeFormat;
	if( r6 != r7 ) goto label$2779$15;
	r5 = (venum*)global$622;
	goto label$2779$16;
	label$2779$15:
	r5 = (venum*)global$658;
	label$2779$16:
	r2->shadowMapChannel__ = r5;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r9 = r0->bias;
	r2->shadowBias__ = r9;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r9 = r0->power;
	r2->shadowPower__ = r9;
	r2 = r0->dshader;
	if( r2 == NULL ) hl_null_access();
	r10 = h3d_pass_Shadows_getShadowProj(((h3d__pass__Shadows)r0));
	r2->shadowProj__ = r10;
	return;
}

haxe__io__Bytes h3d_pass_DirShadowMap_saveStaticData(h3d__pass__DirShadowMap r0) {
	String r6;
	haxe__io__BytesBuffer r11;
	hxd__Pixels r7;
	venum *r2, *r3;
	haxe__io__Bytes r4, r20;
	h3d__col__Bounds r19;
	h3d__Camera r17;
	h3d__Vector r16;
	float r18;
	double r15;
	int *r8, *r9;
	vbyte *r14;
	int r10, r12, r13;
	h3d__mat__Texture r5;
	r2 = r0->mode;
	r3 = (venum*)global$657;
	if( r2 == r3 ) goto label$2780$8;
	r2 = r0->mode;
	r3 = (venum*)global$659;
	if( r2 == r3 ) goto label$2780$8;
	r4 = NULL;
	return r4;
	label$2780$8:
	r5 = r0->staticTexture;
	if( r5 ) goto label$2780$12;
	r6 = (String)global$660;
	hl_throw((vdynamic*)r6);
	label$2780$12:
	r5 = r0->staticTexture;
	if( r5 == NULL ) hl_null_access();
	r8 = NULL;
	r9 = NULL;
	r7 = h3d_mat_Texture_capturePixels(r5,r8,r9);
	if( r7 == NULL ) hl_null_access();
	r4 = r7->bytes;
	r10 = 9;
	r4 = haxe_zip_Compress_run(r4,r10);
	r11 = (haxe__io__BytesBuffer)hl_alloc_obj(haxe__io__BytesBuffer__val);
	haxe_io_BytesBuffer_new(r11);
	r5 = r0->staticTexture;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->width;
	r12 = r11->pos;
	r13 = 4;
	r12 = r12 + r13;
	r13 = r11->size;
	if( r13 >= r12 ) goto label$2780$33;
	r12 = 0;
	haxe_io_BytesBuffer___expand(r11,r12);
	label$2780$33:
	r14 = r11->b;
	r12 = r11->pos;
	*(int*)(r14 + r12) = r10;
	r12 = r11->pos;
	r13 = 4;
	r12 = r12 + r13;
	r11->pos = r12;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->pos;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->x;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$52;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$52:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->pos;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->y;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$72;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$72:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->pos;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->z;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$92;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$92:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->target;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->x;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$112;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$112:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->target;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->y;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$132;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$132:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->target;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->z;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$152;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$152:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->orthoBounds;
	if( r19 == NULL ) hl_null_access();
	r15 = r19->xMin;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$172;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$172:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->orthoBounds;
	if( r19 == NULL ) hl_null_access();
	r15 = r19->yMin;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$192;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$192:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->orthoBounds;
	if( r19 == NULL ) hl_null_access();
	r15 = r19->zMin;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$212;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$212:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->orthoBounds;
	if( r19 == NULL ) hl_null_access();
	r15 = r19->xMax;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$232;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$232:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->orthoBounds;
	if( r19 == NULL ) hl_null_access();
	r15 = r19->yMax;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$252;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$252:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	r17 = r0->lightCamera;
	if( r17 == NULL ) hl_null_access();
	r19 = r17->orthoBounds;
	if( r19 == NULL ) hl_null_access();
	r15 = r19->zMax;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r12 = r11->size;
	if( r12 >= r10 ) goto label$2780$272;
	r10 = 0;
	haxe_io_BytesBuffer___expand(r11,r10);
	label$2780$272:
	r14 = r11->b;
	r10 = r11->pos;
	r18 = (float)r15;
	*(float*)(r14 + r10) = r18;
	r10 = r11->pos;
	r12 = 4;
	r10 = r10 + r12;
	r11->pos = r10;
	if( r4 == NULL ) hl_null_access();
	r10 = r4->length;
	r12 = r11->pos;
	r13 = 4;
	r12 = r12 + r13;
	r13 = r11->size;
	if( r13 >= r12 ) goto label$2780$289;
	r12 = 0;
	haxe_io_BytesBuffer___expand(r11,r12);
	label$2780$289:
	r14 = r11->b;
	r12 = r11->pos;
	*(int*)(r14 + r12) = r10;
	r12 = r11->pos;
	r13 = 4;
	r12 = r12 + r13;
	r11->pos = r12;
	r14 = r4->b;
	r10 = 0;
	r12 = r4->length;
	haxe_io_BytesBuffer___add(r11,r14,r10,r12);
	r20 = haxe_io_BytesBuffer_getBytes(r11);
	return r20;
}

bool h3d_pass_DirShadowMap_loadStaticData(h3d__pass__DirShadowMap r0,haxe__io__Bytes r1) {
	hxd__Pixels r16;
	vvirtual *r25;
	hl__types__ArrayObj r21;
	haxe__io__BytesInput r7;
	hl_type *r23;
	venum *r3, *r4, *r18, *r24;
	bool r6;
	haxe__io__Bytes r5;
	h3d__col__Bounds r15;
	h3d__Camera r13;
	h3d__Vector r12;
	double r14;
	int *r19, *r26;
	vdynamic *r8, *r9;
	varray *r22;
	h3d__mat__Texture r20;
	int r10, r11, r17;
	r3 = r0->mode;
	r4 = (venum*)global$657;
	if( r3 == r4 ) goto label$2781$6;
	r3 = r0->mode;
	r4 = (venum*)global$659;
	if( r3 != r4 ) goto label$2781$7;
	label$2781$6:
	if( r1 ) goto label$2781$9;
	label$2781$7:
	r6 = false;
	return r6;
	label$2781$9:
	r7 = (haxe__io__BytesInput)hl_alloc_obj(haxe__io__BytesInput__val);
	r8 = NULL;
	r9 = NULL;
	haxe_io_BytesInput_new(r7,r1,r8,r9);
	r10 = haxe_io_Input_readInt32(((haxe__io__Input)r7));
	r11 = r0->size;
	if( r10 == r11 ) goto label$2781$18;
	r6 = false;
	return r6;
	label$2781$18:
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->pos;
	if( r12 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r12->x = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->pos;
	if( r12 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r12->y = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->pos;
	if( r12 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r12->z = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->target;
	if( r12 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r12->x = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->target;
	if( r12 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r12->y = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->target;
	if( r12 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r12->z = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->orthoBounds;
	if( r15 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r15->xMin = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->orthoBounds;
	if( r15 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r15->yMin = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->orthoBounds;
	if( r15 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r15->zMin = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->orthoBounds;
	if( r15 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r15->xMax = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->orthoBounds;
	if( r15 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r15->yMax = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->orthoBounds;
	if( r15 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r7));
	r15->zMax = r14;
	r13 = r0->lightCamera;
	if( r13 == NULL ) hl_null_access();
	h3d_Camera_update(r13);
	r16 = (hxd__Pixels)hl_alloc_obj(hxd__Pixels__val);
	r17 = haxe_io_Input_readInt32(((haxe__io__Input)r7));
	r5 = haxe_io_Input_read(((haxe__io__Input)r7),r17);
	r8 = NULL;
	r5 = haxe_zip_Uncompress_run(r5,r8);
	r18 = r0->format;
	r19 = NULL;
	hxd_Pixels_new(r16,r10,r10,r5,r18,r19);
	r20 = r0->staticTexture;
	if( !r20 ) goto label$2781$106;
	r20 = r0->staticTexture;
	if( r20 == NULL ) hl_null_access();
	h3d_mat_Texture_dispose(r20);
	label$2781$106:
	r20 = (h3d__mat__Texture)hl_alloc_obj(h3d__mat__Texture__val);
	r23 = &type$497;
	r17 = 1;
	r22 = hl_alloc_array(r23,r17);
	r24 = (venum*)global$432;
	r17 = 0;
	((venum**)(r22 + 1))[r17] = r24;
	r21 = hl_types_ArrayObj_alloc(r22);
	r18 = r0->format;
	r25 = NULL;
	h3d_mat_Texture_new(r20,r10,r10,r21,r18,r25);
	r0->staticTexture = r20;
	r20 = r0->staticTexture;
	if( r20 == NULL ) hl_null_access();
	r19 = NULL;
	r26 = NULL;
	h3d_mat_Texture_uploadPixels(r20,r16,r19,r26);
	r20 = r0->staticTexture;
	h3d_pass_DirShadowMap_syncShader(r0,r20);
	r6 = true;
	return r6;
}

h3d__pass__Object h3d_pass_DirShadowMap_draw(h3d__pass__DirShadowMap r0,h3d__pass__Object r1) {
	bool *r19;
	String r17;
	h3d__impl__TextureCache r16;
	h3d__mat__DepthBuffer r22;
	h3d__shader__ScreenShader r38;
	hl__types__ArrayObj r21;
	vvirtual *r10, *r14;
	h3d__shader__MinMaxShader r40;
	venum *r6, *r15, *r20, *r23;
	bool r3, r9, r43;
	h3d__Camera r25;
	h3d__pass__ScreenFx r39;
	h3d__Engine r32;
	h3d__pass__Border r37;
	h3d__Vector r24, r28, r29;
	h3d__pass__Object r7;
	h3d__scene__Light r26;
	h3d__pass__Blur r42;
	double r30, r31;
	vclosure *r12;
	int *r33, *r34;
	vdynamic *r13, *r35, *r36;
	h3d__scene__RenderContext r4;
	h3d__scene__LightSystem r27;
	h3d__mat__Texture r8, r11, r41;
	int r5, r18;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->computingStatic;
	if( r3 ) goto label$2782$36;
	r6 = r0->mode;
	if( r6 == NULL ) hl_null_access();
	r5 = HL__ENUM_INDEX__(r6);
	switch(r5) {
		default:
			goto label$2782$36;
		case 0:
			return r1;
		case 2:
			goto label$2782$36;
		case 1:
		case 3:
			r8 = r0->staticTexture;
			if( !r8 ) goto label$2782$23;
			r8 = r0->staticTexture;
			if( r8 == NULL ) hl_null_access();
			r10 = r8->_t;
			if( r10 ) goto label$2782$21;
			r12 = r8->realloc;
			if( r12 ) goto label$2782$21;
			r9 = true;
			goto label$2782$22;
			label$2782$21:
			r9 = false;
			label$2782$22:
			goto label$2782$24;
			label$2782$23:
			r9 = true;
			label$2782$24:
			if( !r9 ) goto label$2782$30;
			r5 = 16777215;
			r13 = NULL;
			r14 = NULL;
			r8 = h3d_mat_Texture_fromColor(r5,r13,r14);
			r0->staticTexture = r8;
			label$2782$30:
			r6 = r0->mode;
			r15 = (venum*)global$659;
			if( r6 != r15 ) goto label$2782$36;
			r8 = r0->staticTexture;
			h3d_pass_DirShadowMap_syncShader(r0,r8);
			return r1;
	}
	label$2782$36:
	r7 = h3d_pass_Shadows_filterPasses(((h3d__pass__Shadows)r0),r1);
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r16 = r4->textures;
	if( r16 == NULL ) hl_null_access();
	r17 = (String)global$662;
	r5 = r0->size;
	r18 = r0->size;
	r3 = false;
	r19 = &r3;
	r20 = r0->format;
	r21 = NULL;
	r8 = h3d_impl_TextureCache_allocTarget(r16,r17,r5,r18,r19,r20,r21);
	r9 = r0->customDepth;
	if( !r9 ) goto label$2782$78;
	r22 = r0->depth;
	if( !r22 ) goto label$2782$67;
	r22 = r0->depth;
	if( r22 == NULL ) hl_null_access();
	r5 = r22->width;
	r18 = r0->size;
	if( r5 != r18 ) goto label$2782$67;
	r22 = r0->depth;
	if( r22 == NULL ) hl_null_access();
	r5 = r22->height;
	r18 = r0->size;
	if( r5 != r18 ) goto label$2782$67;
	r22 = r0->depth;
	if( r22 == NULL ) hl_null_access();
	r9 = h3d_mat_DepthBuffer_isDisposed(r22);
	if( !r9 ) goto label$2782$78;
	label$2782$67:
	r22 = r0->depth;
	if( !r22 ) goto label$2782$72;
	r22 = r0->depth;
	if( r22 == NULL ) hl_null_access();
	h3d_mat_DepthBuffer_dispose(r22);
	label$2782$72:
	r22 = (h3d__mat__DepthBuffer)hl_alloc_obj(h3d__mat__DepthBuffer__val);
	r5 = r0->size;
	r18 = r0->size;
	r23 = NULL;
	h3d_mat_DepthBuffer_new(r22,r5,r18,r23);
	r0->depth = r22;
	label$2782$78:
	if( r8 == NULL ) hl_null_access();
	r22 = r0->depth;
	r8->depthBuffer = r22;
	r6 = r0->mode;
	r15 = (venum*)global$657;
	if( r6 != r15 ) goto label$2782$88;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->computingStatic;
	if( !r9 ) goto label$2782$182;
	label$2782$88:
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r25 = r4->camera;
	if( r25 == NULL ) hl_null_access();
	r24 = r25->target;
	r26 = r0->light;
	if( r26 ) goto label$2782$101;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r27 = r4->lightSystem;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->shadowLight;
	goto label$2782$102;
	label$2782$101:
	r26 = r0->light;
	label$2782$102:
	if( r26 ) goto label$2782$105;
	r28 = NULL;
	goto label$2782$107;
	label$2782$105:
	if( r26 == NULL ) hl_null_access();
	r28 = h3d_scene_Light_getShadowDirection(r26);
	label$2782$107:
	if( r28 ) goto label$2782$124;
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->target;
	if( r29 == NULL ) hl_null_access();
	r5 = 0;
	r30 = (double)r5;
	r29->x = r30;
	r5 = 0;
	r30 = (double)r5;
	r29->y = r30;
	r5 = -1;
	r30 = (double)r5;
	r29->z = r30;
	r30 = 1.;
	r29->w = r30;
	goto label$2782$142;
	label$2782$124:
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->target;
	if( r29 == NULL ) hl_null_access();
	if( r28 == NULL ) hl_null_access();
	r30 = r28->x;
	r29->x = r30;
	r30 = r28->y;
	r29->y = r30;
	r30 = r28->z;
	r29->z = r30;
	r30 = 1.;
	r29->w = r30;
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->target;
	if( r29 == NULL ) hl_null_access();
	h3d_Vector_normalize(r29);
	label$2782$142:
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->target;
	if( r29 == NULL ) hl_null_access();
	r30 = r29->x;
	if( r24 == NULL ) hl_null_access();
	r31 = r24->x;
	r30 = r30 + r31;
	r29->x = r30;
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->target;
	if( r29 == NULL ) hl_null_access();
	r30 = r29->y;
	r31 = r24->y;
	r30 = r30 + r31;
	r29->y = r30;
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->target;
	if( r29 == NULL ) hl_null_access();
	r30 = r29->z;
	r31 = r24->z;
	r30 = r30 + r31;
	r29->z = r30;
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	r29 = r25->pos;
	if( r29 == NULL ) hl_null_access();
	r30 = r24->x;
	r29->x = r30;
	r30 = r24->y;
	r29->y = r30;
	r30 = r24->z;
	r29->z = r30;
	r30 = r24->w;
	r29->w = r30;
	r25 = r0->lightCamera;
	if( r25 == NULL ) hl_null_access();
	h3d_Camera_update(r25);
	label$2782$182:
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r32 = r4->engine;
	if( r32 == NULL ) hl_null_access();
	r33 = NULL;
	r34 = NULL;
	h3d_Engine_pushTarget(r32,r8,r33,r34);
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r32 = r4->engine;
	if( r32 == NULL ) hl_null_access();
	r5 = 16777215;
	r35 = hl_alloc_dynamic(&type$3);
	r35->v.i = r5;
	r5 = 1;
	r30 = (double)r5;
	r13 = hl_alloc_dynamic(&type$6);
	r13->v.d = r30;
	r36 = NULL;
	h3d_Engine_clear(r32,r35,r13,r36);
	r7 = h3d_pass_Default_draw(((h3d__pass__Default)r0),r7);
	r37 = r0->border;
	if( !r37 ) goto label$2782$206;
	r37 = r0->border;
	if( r37 == NULL ) hl_null_access();
	h3d_pass_ScreenFx_render(((h3d__pass__ScreenFx)r37));
	label$2782$206:
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r32 = r4->engine;
	if( r32 == NULL ) hl_null_access();
	h3d_Engine_popTarget(r32);
	r6 = r0->mode;
	r15 = (venum*)global$657;
	if( r6 != r15 ) goto label$2782$259;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->computingStatic;
	if( r9 ) goto label$2782$259;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r16 = r4->textures;
	if( r16 == NULL ) hl_null_access();
	r17 = (String)global$662;
	r5 = r0->size;
	r18 = r0->size;
	r9 = false;
	r19 = &r9;
	r20 = r0->format;
	r21 = NULL;
	r11 = h3d_impl_TextureCache_allocTarget(r16,r17,r5,r18,r19,r20,r21);
	r39 = r0->mergePass;
	if( r39 == NULL ) hl_null_access();
	r38 = r39->shader;
	r40 = (h3d__shader__MinMaxShader)r38;
	if( r40 == NULL ) hl_null_access();
	r40->texA__ = r8;
	r39 = r0->mergePass;
	if( r39 == NULL ) hl_null_access();
	r38 = r39->shader;
	r40 = (h3d__shader__MinMaxShader)r38;
	if( r40 == NULL ) hl_null_access();
	r41 = r0->staticTexture;
	r40->texB__ = r41;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r32 = r4->engine;
	if( r32 == NULL ) hl_null_access();
	r33 = NULL;
	r34 = NULL;
	h3d_Engine_pushTarget(r32,r11,r33,r34);
	r39 = r0->mergePass;
	if( r39 == NULL ) hl_null_access();
	h3d_pass_ScreenFx_render(r39);
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r32 = r4->engine;
	if( r32 == NULL ) hl_null_access();
	h3d_Engine_popTarget(r32);
	r8 = r11;
	label$2782$259:
	r42 = r0->blur;
	if( r42 == NULL ) hl_null_access();
	r30 = r42->radius;
	r5 = 0;
	r31 = (double)r5;
	if( !(r31 < r30) ) goto label$2782$277;
	r6 = r0->mode;
	r15 = (venum*)global$657;
	if( r6 != r15 ) goto label$2782$272;
	r4 = r0->ctx;
	if( r4 == NULL ) hl_null_access();
	r43 = r4->computingStatic;
	if( r43 ) goto label$2782$277;
	label$2782$272:
	r42 = r0->blur;
	if( r42 == NULL ) hl_null_access();
	r4 = r0->ctx;
	r41 = NULL;
	h3d_pass_Blur_apply(r42,((h3d__impl__RenderContext)r4),r8,r41);
	label$2782$277:
	h3d_pass_DirShadowMap_syncShader(r0,r8);
	return r7;
}

void h3d_pass_DirShadowMap_computeStatic(h3d__pass__DirShadowMap r0,h3d__pass__Object r1) {
	vvirtual *r9;
	venum *r3, *r4;
	bool r10;
	h3d__pass__Object r5;
	h3d__shader__DirShadow r7;
	h3d__mat__Texture r6, r8;
	r3 = r0->mode;
	r4 = (venum*)global$659;
	if( r3 == r4 ) goto label$2783$7;
	r3 = r0->mode;
	r4 = (venum*)global$657;
	if( r3 == r4 ) goto label$2783$7;
	return;
	label$2783$7:
	r5 = ((h3d__pass__Object (*)(h3d__pass__DirShadowMap,h3d__pass__Object))r0->$type->vobj_proto[2])(r0,r1);
	r7 = r0->dshader;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->shadowMap__;
	r8 = r0->staticTexture;
	if( !r8 ) goto label$2783$16;
	r8 = r0->staticTexture;
	if( r8 == NULL ) hl_null_access();
	h3d_mat_Texture_dispose(r8);
	label$2783$16:
	if( r6 == NULL ) hl_null_access();
	r9 = NULL;
	r8 = ((h3d__mat__Texture (*)(h3d__mat__Texture,vvirtual*))r6->$type->vobj_proto[1])(r6,r9);
	r0->staticTexture = r8;
	r7 = r0->dshader;
	if( r7 == NULL ) hl_null_access();
	r10 = true;
	r7->constModified = r10;
	r8 = r0->staticTexture;
	r7->shadowMap__ = r8;
	return;
}

void h3d_pass_DirShadowMap_calcShadowBounds(h3d__pass__DirShadowMap r0,h3d__Camera r1) {
	hl__types__ArrayObj r14;
	venum *r9, *r10, *r11;
	h3d__scene__Scene r6;
	h3d__col__Bounds r2, r12;
	h3d__Camera r3;
	h3d__Vector r16;
	double r20, r21, r22, r23, r24, r25;
	vclosure *r8;
	vdynamic *r17;
	h3d__scene__RenderContext r7;
	varray *r18;
	int r13, r15;
	h3d__Matrix r5, r19;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->orthoBounds;
	r5 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r5);
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->scene;
	if( r6 == NULL ) hl_null_access();
	r9 = hl_alloc_enum(&type$2428,0);
	((Enum$2428*)r9)->p0 = (h3d__Camera)r1;
	((Enum$2428*)r9)->p1 = (h3d__col__Bounds)r2;
	((Enum$2428*)r9)->p2 = (h3d__Matrix)r5;
	r8 = hl_alloc_closure_ptr(&type$2427,fun$2927,r9);
	h3d_scene_Object_iterVisibleMeshes(((h3d__scene__Object)r6),r8);
	r10 = r0->mode;
	r11 = (venum*)global$656;
	if( r10 != r11 ) goto label$2777$133;
	r12 = (h3d__col__Bounds)hl_alloc_obj(h3d__col__Bounds__val);
	h3d_col_Bounds_new(r12);
	r13 = 0;
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r3 = r7->camera;
	if( r3 == NULL ) hl_null_access();
	r14 = h3d_Camera_getFrustumCorners(r3);
	label$2777$25:
	if( r14 == NULL ) hl_null_access();
	r15 = r14->length;
	if( r13 >= r15 ) goto label$2777$128;
	r15 = r14->length;
	if( ((unsigned)r13) < ((unsigned)r15) ) goto label$2777$33;
	r16 = NULL;
	goto label$2777$36;
	label$2777$33:
	r18 = r14->array;
	r17 = ((vdynamic**)(r18 + 1))[r13];
	r16 = (h3d__Vector)r17;
	label$2777$36:
	++r13;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->mcam;
	if( r16 == NULL ) hl_null_access();
	r20 = r16->x;
	if( r19 == NULL ) hl_null_access();
	r21 = r19->_12;
	r20 = r20 * r21;
	r21 = r16->y;
	r22 = r19->_22;
	r21 = r21 * r22;
	r20 = r20 + r21;
	r21 = r16->z;
	r22 = r19->_32;
	r21 = r21 * r22;
	r20 = r20 + r21;
	r21 = r16->w;
	r22 = r19->_42;
	r21 = r21 * r22;
	r20 = r20 + r21;
	r21 = r16->x;
	r22 = r19->_13;
	r21 = r21 * r22;
	r22 = r16->y;
	r23 = r19->_23;
	r22 = r22 * r23;
	r21 = r21 + r22;
	r22 = r16->z;
	r23 = r19->_33;
	r22 = r22 * r23;
	r21 = r21 + r22;
	r22 = r16->w;
	r23 = r19->_43;
	r22 = r22 * r23;
	r21 = r21 + r22;
	r22 = r16->x;
	r23 = r19->_14;
	r22 = r22 * r23;
	r23 = r16->y;
	r24 = r19->_24;
	r23 = r23 * r24;
	r22 = r22 + r23;
	r23 = r16->z;
	r24 = r19->_34;
	r23 = r23 * r24;
	r22 = r22 + r23;
	r23 = r16->w;
	r24 = r19->_44;
	r23 = r23 * r24;
	r22 = r22 + r23;
	r23 = r16->x;
	r24 = r19->_11;
	r23 = r23 * r24;
	r24 = r16->y;
	r25 = r19->_21;
	r24 = r24 * r25;
	r23 = r23 + r24;
	r24 = r16->z;
	r25 = r19->_31;
	r24 = r24 * r25;
	r23 = r23 + r24;
	r24 = r16->w;
	r25 = r19->_41;
	r24 = r24 * r25;
	r23 = r23 + r24;
	r16->x = r23;
	r16->y = r20;
	r16->z = r21;
	r16->w = r22;
	r20 = r16->x;
	r21 = r16->y;
	r22 = r16->z;
	if( r12 == NULL ) hl_null_access();
	r24 = r12->xMin;
	if( !(r20 < r24) ) goto label$2777$112;
	r12->xMin = r20;
	label$2777$112:
	r24 = r12->xMax;
	if( !(r24 < r20) ) goto label$2777$115;
	r12->xMax = r20;
	label$2777$115:
	r24 = r12->yMin;
	if( !(r21 < r24) ) goto label$2777$118;
	r12->yMin = r21;
	label$2777$118:
	r24 = r12->yMax;
	if( !(r24 < r21) ) goto label$2777$121;
	r12->yMax = r21;
	label$2777$121:
	r24 = r12->zMin;
	if( !(r22 < r24) ) goto label$2777$124;
	r12->zMin = r22;
	label$2777$124:
	r24 = r12->zMax;
	if( !(r24 < r22) ) goto label$2777$127;
	r12->zMax = r22;
	label$2777$127:
	goto label$2777$25;
	label$2777$128:
	if( r12 == NULL ) hl_null_access();
	if( r2 == NULL ) hl_null_access();
	r20 = r2->zMin;
	r12->zMin = r20;
	h3d_col_Bounds_intersection(r2,r2,r12);
	label$2777$133:
	if( r2 == NULL ) hl_null_access();
	r20 = 1.01;
	h3d_col_Bounds_scaleCenter(r2,r20);
	return;
}

void h3d_pass_DirShadowMap_new(h3d__pass__DirShadowMap r0,h3d__scene__Light r1) {
	bool *r13;
	h3d__mat__DepthBuffer r25;
	hl__types__ArrayObj r6;
	venum *r24;
	h3d__shader__MinMaxShader r4;
	bool r20;
	h3d__col__Bounds r14;
	h3d__Camera r7;
	h3d__Engine r22;
	h3d__pass__ScreenFx r3;
	h3d__$Engine r23;
	h3d__pass__Border r16;
	vclosure *r2;
	h3d__impl__Driver r21;
	int *r19;
	double *r8, *r9, *r10, *r11, *r12;
	int r17, r18;
	h3d__shader__DirShadow r15;
	r2 = r0->calcShadowBounds;
	if( r2 ) goto label$2784$4;
	r2 = hl_alloc_closure_ptr(&type$2429,h3d_pass_DirShadowMap_calcShadowBounds,r0);
	r0->calcShadowBounds = r2;
	label$2784$4:
	r3 = (h3d__pass__ScreenFx)hl_alloc_obj(h3d__pass__ScreenFx__val);
	r4 = (h3d__shader__MinMaxShader)hl_alloc_obj(h3d__shader__MinMaxShader__val);
	h3d_shader_MinMaxShader_new(r4);
	r6 = NULL;
	h3d_pass_ScreenFx_new(r3,((h3d__shader__ScreenShader)r4),r6);
	r0->mergePass = r3;
	h3d_pass_Shadows_new(((h3d__pass__Shadows)r0),r1);
	r7 = (h3d__Camera)hl_alloc_obj(h3d__Camera__val);
	r8 = NULL;
	r9 = NULL;
	r10 = NULL;
	r11 = NULL;
	r12 = NULL;
	r13 = NULL;
	h3d_Camera_new(r7,r8,r9,r10,r11,r12,r13);
	r0->lightCamera = r7;
	r7 = r0->lightCamera;
	if( r7 == NULL ) hl_null_access();
	r14 = (h3d__col__Bounds)hl_alloc_obj(h3d__col__Bounds__val);
	h3d_col_Bounds_new(r14);
	r7->orthoBounds = r14;
	r15 = (h3d__shader__DirShadow)hl_alloc_obj(h3d__shader__DirShadow__val);
	h3d_shader_DirShadow_new(r15);
	r0->dshader = r15;
	r0->shader = ((hxsl__Shader)r15);
	r16 = (h3d__pass__Border)hl_alloc_obj(h3d__pass__Border__val);
	r17 = r0->size;
	r18 = r0->size;
	r19 = NULL;
	h3d_pass_Border_new(r16,r17,r18,r19);
	r0->border = r16;
	r23 = (h3d__$Engine)global$38;
	r22 = r23->CURRENT;
	if( r22 == NULL ) hl_null_access();
	r21 = r22->driver;
	if( r21 == NULL ) hl_null_access();
	r24 = (venum*)global$655;
	r20 = ((bool (*)(h3d__impl__Driver,venum*))r21->$type->vobj_proto[0])(r21,r24);
	r0->customDepth = r20;
	r20 = r0->customDepth;
	if( r20 ) goto label$2784$47;
	r25 = h3d_mat_DepthBuffer_getDefault();
	r0->depth = r25;
	label$2784$47:
	return;
}

