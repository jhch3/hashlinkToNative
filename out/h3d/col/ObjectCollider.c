﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

double h3d_col_ObjectCollider_rayIntersection(h3d__col__ObjectCollider r0,h3d__col__Ray r1,bool r2) {
	vvirtual *r22;
	h3d__col__Ray r3;
	double r5, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21;
	int r23;
	h3d__scene__Object r7;
	h3d__Matrix r6;
	r3 = r0->tmpRay;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r5 = r1->px;
	r3->px = r5;
	r5 = r1->py;
	r3->py = r5;
	r5 = r1->pz;
	r3->pz = r5;
	r5 = r1->lx;
	r3->lx = r5;
	r5 = r1->ly;
	r3->ly = r5;
	r5 = r1->lz;
	r3->lz = r5;
	r7 = r0->obj;
	if( r7 == NULL ) hl_null_access();
	r6 = h3d_scene_Object_getInvPos(r7);
	r5 = r1->px;
	r8 = r1->py;
	r9 = r1->pz;
	if( r6 == NULL ) hl_null_access();
	r14 = r6->_11;
	r13 = r5 * r14;
	r15 = r6->_21;
	r14 = r8 * r15;
	r13 = r13 + r14;
	r15 = r6->_31;
	r14 = r9 * r15;
	r13 = r13 + r14;
	r14 = r6->_41;
	r13 = r13 + r14;
	r10 = r13;
	r14 = r6->_12;
	r13 = r5 * r14;
	r15 = r6->_22;
	r14 = r8 * r15;
	r13 = r13 + r14;
	r15 = r6->_32;
	r14 = r9 * r15;
	r13 = r13 + r14;
	r14 = r6->_42;
	r13 = r13 + r14;
	r11 = r13;
	r14 = r6->_13;
	r13 = r5 * r14;
	r15 = r6->_23;
	r14 = r8 * r15;
	r13 = r13 + r14;
	r15 = r6->_33;
	r14 = r9 * r15;
	r13 = r13 + r14;
	r14 = r6->_43;
	r13 = r13 + r14;
	r12 = r13;
	r1->px = r10;
	r1->py = r11;
	r1->pz = r12;
	r13 = r1->lx;
	r14 = r1->ly;
	r15 = r1->lz;
	r20 = r6->_11;
	r19 = r13 * r20;
	r21 = r6->_21;
	r20 = r14 * r21;
	r19 = r19 + r20;
	r21 = r6->_31;
	r20 = r15 * r21;
	r19 = r19 + r20;
	r16 = r19;
	r20 = r6->_12;
	r19 = r13 * r20;
	r21 = r6->_22;
	r20 = r14 * r21;
	r19 = r19 + r20;
	r21 = r6->_32;
	r20 = r15 * r21;
	r19 = r19 + r20;
	r17 = r19;
	r20 = r6->_13;
	r19 = r13 * r20;
	r21 = r6->_23;
	r20 = r14 * r21;
	r19 = r19 + r20;
	r21 = r6->_33;
	r20 = r15 * r21;
	r19 = r19 + r20;
	r18 = r19;
	r1->lx = r16;
	r1->ly = r17;
	r1->lz = r18;
	h3d_col_Ray_normalize(r1);
	r22 = r0->collider;
	if( r22 == NULL ) hl_null_access();
	if( hl_vfields(r22)[0] ) r5 = ((double (*)(vdynamic*,h3d__col__Ray,bool))hl_vfields(r22)[0])(r22->value,r1,r2); else {
		void *args[] = {r1,&r2};
		vdynamic ret;
		hl_dyn_call_obj(r22->value,&type$253,69795042/*rayIntersection*/,args,&ret);
		r5 = (double)ret.v.d;
	}
	r23 = 0;
	r9 = (double)r23;
	if( !(r5 < r9) ) goto label$2610$113;
	r3 = r0->tmpRay;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->px;
	r1->px = r8;
	r8 = r3->py;
	r1->py = r8;
	r8 = r3->pz;
	r1->pz = r8;
	r8 = r3->lx;
	r1->lx = r8;
	r8 = r3->ly;
	r1->ly = r8;
	r8 = r3->lz;
	r1->lz = r8;
	return r5;
	label$2610$113:
	r8 = r1->px;
	r10 = r1->lx;
	r9 = r5 * r10;
	r8 = r8 + r9;
	r9 = r1->py;
	r11 = r1->ly;
	r10 = r5 * r11;
	r9 = r9 + r10;
	r10 = r1->pz;
	r12 = r1->lz;
	r11 = r5 * r12;
	r10 = r10 + r11;
	r7 = r0->obj;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->absPos;
	if( r6 == NULL ) hl_null_access();
	r15 = r6->_11;
	r14 = r8 * r15;
	r16 = r6->_21;
	r15 = r9 * r16;
	r14 = r14 + r15;
	r16 = r6->_31;
	r15 = r10 * r16;
	r14 = r14 + r15;
	r15 = r6->_41;
	r14 = r14 + r15;
	r11 = r14;
	r15 = r6->_12;
	r14 = r8 * r15;
	r16 = r6->_22;
	r15 = r9 * r16;
	r14 = r14 + r15;
	r16 = r6->_32;
	r15 = r10 * r16;
	r14 = r14 + r15;
	r15 = r6->_42;
	r14 = r14 + r15;
	r12 = r14;
	r15 = r6->_13;
	r14 = r8 * r15;
	r16 = r6->_23;
	r15 = r9 * r16;
	r14 = r14 + r15;
	r16 = r6->_33;
	r15 = r10 * r16;
	r14 = r14 + r15;
	r15 = r6->_43;
	r14 = r14 + r15;
	r13 = r14;
	r3 = r0->tmpRay;
	if( r3 == NULL ) hl_null_access();
	r14 = r3->px;
	r1->px = r14;
	r14 = r3->py;
	r1->py = r14;
	r14 = r3->pz;
	r1->pz = r14;
	r14 = r3->lx;
	r1->lx = r14;
	r14 = r3->ly;
	r1->ly = r14;
	r14 = r3->lz;
	r1->lz = r14;
	r15 = r1->px;
	r14 = r11 - r15;
	r16 = r1->py;
	r15 = r12 - r16;
	r17 = r1->pz;
	r16 = r13 - r17;
	r17 = r14 * r14;
	r18 = r15 * r15;
	r17 = r17 + r18;
	r18 = r16 * r16;
	r17 = r17 + r18;
	r17 = hl_math_sqrt(r17);
	return r17;
}

bool h3d_col_ObjectCollider_contains(h3d__col__ObjectCollider r0,h3d__col__Point r1) {
	vvirtual *r13;
	bool r12;
	double r2, r3, r4, r7, r8, r9, r10, r11;
	h3d__scene__Object r6;
	h3d__Matrix r5;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r3 = r1->y;
	r4 = r1->z;
	r6 = r0->obj;
	if( r6 == NULL ) hl_null_access();
	r5 = h3d_scene_Object_getInvPos(r6);
	r7 = r1->x;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->_12;
	r7 = r7 * r8;
	r8 = r1->y;
	r9 = r5->_22;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r1->z;
	r9 = r5->_32;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r5->_42;
	r7 = r7 + r8;
	r8 = r1->x;
	r9 = r5->_13;
	r8 = r8 * r9;
	r9 = r1->y;
	r10 = r5->_23;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = r1->z;
	r10 = r5->_33;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = r5->_43;
	r8 = r8 + r9;
	r9 = r1->x;
	r10 = r5->_11;
	r9 = r9 * r10;
	r10 = r1->y;
	r11 = r5->_21;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r1->z;
	r11 = r5->_31;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r5->_41;
	r9 = r9 + r10;
	r1->x = r9;
	r1->y = r7;
	r1->z = r8;
	r13 = r0->collider;
	if( r13 == NULL ) hl_null_access();
	if( hl_vfields(r13)[2] ) r12 = ((bool (*)(vdynamic*,h3d__col__Point))hl_vfields(r13)[2])(r13->value,r1); else {
		void *args[] = {r1};
		vdynamic ret;
		hl_dyn_call_obj(r13->value,&type$255,209410724/*contains*/,args,&ret);
		r12 = (bool)ret.v.i;
	}
	r1->x = r2;
	r1->y = r3;
	r1->z = r4;
	return r12;
}

bool h3d_col_ObjectCollider_inFrustum(h3d__col__ObjectCollider r0,h3d__Matrix r1) {
	String r2;
	r2 = (String)global$484;
	hl_throw((vdynamic*)r2);
}

void h3d_col_ObjectCollider_new(h3d__col__ObjectCollider r0,h3d__scene__Object r1,vvirtual* r2) {
	h3d__col__Ray r3;
	r3 = (h3d__col__Ray)hl_alloc_obj(h3d__col__Ray__val);
	h3d_col_Ray_new(r3);
	r0->tmpRay = r3;
	r0->obj = r1;
	r0->collider = r2;
	return;
}

