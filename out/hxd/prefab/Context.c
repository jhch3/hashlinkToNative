﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_prefab_Context_init(hxd__prefab__Context r0) {
	hxd__prefab__ContextShared r2;
	h2d__Object r3;
	h3d__scene__Object r4;
	r2 = r0->shared;
	if( r2 ) goto label$3612$5;
	r2 = (hxd__prefab__ContextShared)hl_alloc_obj(hxd__prefab__ContextShared__val);
	hxd_prefab_ContextShared_new(r2);
	r0->shared = r2;
	label$3612$5:
	r2 = r0->shared;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->root2d;
	r0->local2d = r3;
	r2 = r0->shared;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->root3d;
	r0->local3d = r4;
	return;
}

hxd__prefab__Context hxd_prefab_Context_clone(hxd__prefab__Context r0,hxd__prefab__Prefab r1) {
	haxe__ds__ObjectMap r9;
	hl__types__ArrayObj r10;
	hl_type *r12;
	bool r8;
	hxd__prefab__ContextShared r4;
	h2d__Object r5;
	vdynamic *r7;
	int r13;
	varray *r11;
	h3d__scene__Object r6;
	hxd__prefab__Context r2;
	r2 = (hxd__prefab__Context)hl_alloc_obj(hxd__prefab__Context__val);
	hxd_prefab_Context_new(r2);
	r4 = r0->shared;
	r2->shared = r4;
	r5 = r0->local2d;
	r2->local2d = r5;
	r6 = r0->local3d;
	r2->local3d = r6;
	r7 = r0->custom;
	r2->custom = r7;
	r8 = r0->isRef;
	r2->isRef = r8;
	if( !r1 ) goto label$3613$47;
	r8 = r0->isRef;
	if( r8 ) goto label$3613$21;
	r4 = r0->shared;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->contexts;
	if( r9 == NULL ) hl_null_access();
	haxe_ds_ObjectMap_set(r9,((vdynamic*)r1),((vdynamic*)r2));
	goto label$3613$47;
	label$3613$21:
	r4 = r0->shared;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->references;
	if( r9 == NULL ) hl_null_access();
	r8 = haxe_ds_ObjectMap_exists(r9,((vdynamic*)r1));
	if( r8 ) goto label$3613$39;
	r4 = r0->shared;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->references;
	if( r9 == NULL ) hl_null_access();
	r12 = &type$3621;
	r13 = 1;
	r11 = hl_alloc_array(r12,r13);
	r13 = 0;
	((hxd__prefab__Context*)(r11 + 1))[r13] = r2;
	r10 = hl_types_ArrayObj_alloc(r11);
	haxe_ds_ObjectMap_set(r9,((vdynamic*)r1),((vdynamic*)r10));
	goto label$3613$47;
	label$3613$39:
	r4 = r0->shared;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->references;
	if( r9 == NULL ) hl_null_access();
	r7 = haxe_ds_ObjectMap_get(r9,((vdynamic*)r1));
	r10 = (hl__types__ArrayObj)hl_dyn_castp(&r7,&type$9,&type$46);
	if( r10 == NULL ) hl_null_access();
	r13 = hl_types_ArrayObj_push(r10,((vdynamic*)r2));
	label$3613$47:
	return r2;
}

h3d__scene__Object hxd_prefab_Context_loadModel(hxd__prefab__Context r0,String r1) {
	hxd__prefab__ContextShared r3;
	h3d__scene__Object r2;
	r3 = r0->shared;
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_prefab_ContextShared_loadModel(r3,r1);
	return r2;
}

h3d__anim__Animation hxd_prefab_Context_loadAnimation(hxd__prefab__Context r0,String r1) {
	hxd__prefab__ContextShared r3;
	h3d__anim__Animation r2;
	r3 = r0->shared;
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_prefab_ContextShared_loadAnimation(r3,r1);
	return r2;
}

h3d__mat__Texture hxd_prefab_Context_loadTexture(hxd__prefab__Context r0,String r1) {
	hxd__prefab__ContextShared r3;
	h3d__mat__Texture r2;
	r3 = r0->shared;
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_prefab_ContextShared_loadTexture(r3,r1);
	return r2;
}

vvirtual* hxd_prefab_Context_loadShader(hxd__prefab__Context r0,String r1) {
	vvirtual *r2;
	hxd__prefab__ContextShared r3;
	r3 = r0->shared;
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_prefab_ContextShared_loadShader(r3,r1);
	return r2;
}

h3d__scene__Object hxd_prefab_Context_locateObject(hxd__prefab__Context r0,String r1) {
	String r3, r7, r17;
	hl__types__ArrayObj r6, r10;
	hxd__prefab__ContextShared r8;
	vdynamic *r5;
	varray *r16;
	int r9, r11, r14, r15;
	h3d__scene__Object r4, r12, r13;
	if( r1 ) goto label$3618$3;
	r4 = NULL;
	return r4;
	label$3618$3:
	if( r1 == NULL ) hl_null_access();
	r7 = (String)global$210;
	r6 = String_split(r1,r7);
	r8 = r0->shared;
	if( r8 == NULL ) hl_null_access();
	r4 = r8->root3d;
	label$3618$9:
	if( r6 == NULL ) hl_null_access();
	r9 = r6->length;
	r11 = 0;
	if( r11 >= r9 ) goto label$3618$76;
	r12 = NULL;
	r5 = hl_types_ArrayObj_shift(r6);
	r3 = (String)r5;
	if( r4 == NULL ) hl_null_access();
	r10 = r4->children;
	r9 = 0;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->length;
	label$3618$22:
	if( r9 >= r11 ) goto label$3618$40;
	if( r10 == NULL ) hl_null_access();
	r14 = r9;
	++r9;
	r15 = r10->length;
	if( ((unsigned)r14) < ((unsigned)r15) ) goto label$3618$31;
	r13 = NULL;
	goto label$3618$34;
	label$3618$31:
	r16 = r10->array;
	r5 = ((vdynamic**)(r16 + 1))[r14];
	r13 = (h3d__scene__Object)r5;
	label$3618$34:
	if( r13 == NULL ) hl_null_access();
	r7 = r13->name;
	if( r7 != r3 && (!r7 || !r3 || String___compare(r7,(vdynamic*)r3) != 0) ) goto label$3618$39;
	r12 = r13;
	goto label$3618$40;
	label$3618$39:
	goto label$3618$22;
	label$3618$40:
	if( r12 ) goto label$3618$50;
	if( r4 == NULL ) hl_null_access();
	r13 = ((h3d__scene__Object (*)(h3d__scene__Object,String))r4->$type->vobj_proto[3])(r4,r3);
	r12 = r13;
	if( !r13 ) goto label$3618$50;
	if( r13 == NULL ) hl_null_access();
	r13 = r13->parent;
	if( r13 == r4 ) goto label$3618$50;
	r13 = NULL;
	r12 = r13;
	label$3618$50:
	if( r12 ) goto label$3618$74;
	if( r1 == NULL ) hl_null_access();
	r17 = (String)global$210;
	r10 = String_split(r1,r17);
	r9 = 0;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->length;
	label$3618$57:
	if( r9 >= r11 ) goto label$3618$64;
	++r9;
	if( r10 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_pop(r10);
	r7 = (String)r5;
	goto label$3618$57;
	label$3618$64:
	r8 = r0->shared;
	if( r8 == NULL ) hl_null_access();
	r7 = (String)global$1257;
	if( r10 == NULL ) hl_null_access();
	r17 = (String)global$210;
	r17 = hl_types_ArrayObj_join(r10,r17);
	r7 = String___add__(r7,r17);
	hxd_prefab_ContextShared_onError(r8,((vdynamic*)r7));
	r13 = NULL;
	return r13;
	label$3618$74:
	r4 = r12;
	goto label$3618$9;
	label$3618$76:
	return r4;
}

void hxd_prefab_Context_new(hxd__prefab__Context r0) {
	bool r1;
	r1 = false;
	r0->isRef = r1;
	return;
}

