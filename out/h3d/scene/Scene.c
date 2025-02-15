﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_scene_Scene_setEvents(h3d__scene__Scene r0,hxd__SceneEvents r1) {
	r0->events = r1;
	return;
}

void h3d_scene_Scene_addEventListener(h3d__scene__Scene r0,vclosure* r1) {
	hl__types__ArrayObj r3;
	int r2;
	r3 = r0->eventListeners;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r3,((vdynamic*)r1));
	return;
}

bool h3d_scene_Scene_removeEventListener(h3d__scene__Scene r0,vclosure* r1) {
	hl__types__ArrayObj r3, r5;
	bool r9;
	vclosure *r6;
	vdynamic *r7;
	varray *r8;
	int r2, r4;
	r2 = 0;
	r3 = r0->eventListeners;
	label$1154$2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r2 >= r4 ) goto label$1154$22;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$1154$10;
	r6 = NULL;
	goto label$1154$13;
	label$1154$10:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r2];
	r6 = (vclosure*)r7;
	label$1154$13:
	++r2;
	r9 = hl_fun_compare(((vdynamic*)r6),((vdynamic*)r1));
	if( !r9 ) goto label$1154$21;
	r5 = r0->eventListeners;
	if( r5 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_remove(r5,((vdynamic*)r6));
	r9 = true;
	return r9;
	label$1154$21:
	goto label$1154$2;
	label$1154$22:
	r9 = false;
	return r9;
}

void h3d_scene_Scene_dispatchListeners(h3d__scene__Scene r0,hxd__Event r1) {
	hl__types__ArrayObj r4;
	bool r10;
	vclosure *r7;
	vdynamic *r8;
	varray *r9;
	int r2, r5, r6;
	r2 = 0;
	r4 = r0->eventListeners;
	label$1155$2:
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( r2 >= r6 ) goto label$1155$22;
	r5 = r2;
	++r2;
	r6 = r4->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$1155$12;
	r7 = NULL;
	goto label$1155$15;
	label$1155$12:
	r9 = r4->array;
	r8 = ((vdynamic**)(r9 + 1))[r5];
	r7 = (vclosure*)r8;
	label$1155$15:
	if( r7 == NULL ) hl_null_access();
	r7->hasValue ? ((void (*)(vdynamic*,hxd__Event))r7->fun)((vdynamic*)r7->value,r1) : ((void (*)(hxd__Event))r7->fun)(r1);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->propagate;
	if( r10 ) goto label$1155$21;
	goto label$1155$22;
	label$1155$21:
	goto label$1155$2;
	label$1155$22:
	return;
}

h3d__scene__Renderer h3d_scene_Scene_set_renderer(h3d__scene__Scene r0,h3d__scene__Renderer r1) {
	h3d__scene__RenderContext r2;
	r0->renderer = r1;
	if( !r1 ) goto label$1156$5;
	if( r1 == NULL ) hl_null_access();
	r2 = r0->ctx;
	r1->ctx = r2;
	label$1156$5:
	return r1;
}

int h3d_scene_Scene_sortHitPointByCameraDistance(h3d__scene__Scene r0,h3d__scene__Interactive r1,h3d__scene__Interactive r2) {
	h3d__Vector r4;
	double r3, r5;
	int r6;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->hitPoint;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->w;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->hitPoint;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->w;
	if( !(r5 < r3) ) goto label$1157$11;
	r6 = -1;
	return r6;
	label$1157$11:
	r6 = 1;
	return r6;
}

void h3d_scene_Scene_dispatchEvent(h3d__scene__Scene r0,hxd__Event r1,vvirtual* r2) {
	h3d__scene__Interactive r4;
	r4 = (h3d__scene__Interactive)hl_dyn_castp(&r2,&type$1316,&type$2627);
	if( r4 == NULL ) hl_null_access();
	h3d_scene_Interactive_handleEvent(r4,r1);
	return;
}

bool h3d_scene_Scene_isInteractiveVisible(h3d__scene__Scene r0,vvirtual* r1) {
	bool r6;
	int r4, r5;
	h3d__scene__Object r2, r3;
	r2 = (h3d__scene__Object)hl_dyn_castp(&r1,&type$1316,&type$1302);
	label$1159$1:
	if( !r2 ) goto label$1159$14;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->flags;
	r5 = 2;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$1159$11;
	r6 = false;
	return r6;
	label$1159$11:
	r3 = r2->parent;
	r2 = r3;
	goto label$1159$1;
	label$1159$14:
	r6 = true;
	return r6;
}

h3d__scene__Interactive h3d_scene_Scene_handleEvent(h3d__scene__Scene r0,hxd__Event r1,vvirtual* r2) {
	vvirtual *r50;
	h3d__scene__Interactive r7, r30;
	hl__types__ArrayObj r5, r28;
	hl_type *r56;
	bool r51;
	h3d__Camera r14;
	hxd__Window r10;
	h3d__Vector r13, r17, r18, r53;
	h3d__col__Ray r19;
	vclosure *r54, *r55;
	double r9, r11, r12, r15, r16, r20, r21, r22, r23, r24, r25, r34, r35, r36, r37, r38, r39, r40, r41, r43, r44, r45, r46, r47, r48, r49, r52;
	vdynamic *r8;
	h3d__Matrix r33, r42;
	h3d__scene__Object r31, r32;
	varray *r29;
	int r4, r6, r26, r27;
	r5 = r0->interactives;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	r6 = 0;
	if( r4 != r6 ) goto label$1160$7;
	r7 = NULL;
	return r7;
	label$1160$7:
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	r6 = 0;
	if( r4 != r6 ) goto label$1160$517;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->relX;
	r10 = r0->window;
	if( r10 == NULL ) hl_null_access();
	r4 = hxd_Window_get_width(r10);
	r11 = (double)r4;
	r9 = r9 / r11;
	r11 = 0.5;
	r9 = r9 - r11;
	r4 = 2;
	r11 = (double)r4;
	r9 = r9 * r11;
	r11 = r1->relY;
	r10 = r0->window;
	if( r10 == NULL ) hl_null_access();
	r4 = hxd_Window_get_height(r10);
	r12 = (double)r4;
	r11 = r11 / r12;
	r12 = 0.5;
	r11 = r11 - r12;
	r11 = -r11;
	r4 = 2;
	r12 = (double)r4;
	r11 = r11 * r12;
	r14 = r0->camera;
	if( r14 == NULL ) hl_null_access();
	r4 = 0;
	r16 = (double)r4;
	r13 = h3d_Camera_unproject(r14,r9,r11,r16);
	r14 = r0->camera;
	if( r14 == NULL ) hl_null_access();
	r4 = 1;
	r16 = (double)r4;
	r17 = h3d_Camera_unproject(r14,r9,r11,r16);
	if( r13 == NULL ) hl_null_access();
	r12 = r13->x;
	r15 = r13->y;
	r16 = r13->z;
	r19 = (h3d__col__Ray)hl_alloc_obj(h3d__col__Ray__val);
	h3d_col_Ray_new(r19);
	r19->px = r12;
	r19->py = r15;
	r19->pz = r16;
	if( r17 == NULL ) hl_null_access();
	r20 = r17->x;
	r20 = r20 - r12;
	r19->lx = r20;
	r20 = r17->y;
	r20 = r20 - r15;
	r19->ly = r20;
	r20 = r17->z;
	r20 = r20 - r16;
	r19->lz = r20;
	h3d_col_Ray_normalize(r19);
	r20 = r19->px;
	r21 = r19->py;
	r22 = r19->pz;
	r23 = r19->lx;
	r24 = r19->ly;
	r25 = r19->lz;
	r4 = 0x80000000;
	r6 = 0;
	r5 = r0->interactives;
	label$1160$75:
	if( r5 == NULL ) hl_null_access();
	r27 = r5->length;
	if( r6 >= r27 ) goto label$1160$253;
	r27 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r27) ) goto label$1160$83;
	r7 = NULL;
	goto label$1160$86;
	label$1160$83:
	r29 = r5->array;
	r8 = ((vdynamic**)(r29 + 1))[r6];
	r7 = (h3d__scene__Interactive)r8;
	label$1160$86:
	++r6;
	if( r7 == NULL ) hl_null_access();
	r26 = r7->priority;
	if( r26 >= r4 ) goto label$1160$91;
	goto label$1160$75;
	label$1160$91:
	r31 = ((h3d__scene__Object)r7);
	label$1160$92:
	if( !r31 ) goto label$1160$103;
	if( r31 == NULL ) hl_null_access();
	r26 = r31->flags;
	r27 = 2;
	r26 = r26 & r27;
	r27 = 0;
	if( r26 == r27 ) goto label$1160$103;
	r32 = r31->parent;
	r31 = r32;
	goto label$1160$92;
	label$1160$103:
	if( !r31 ) goto label$1160$105;
	goto label$1160$75;
	label$1160$105:
	if( r7 == NULL ) hl_null_access();
	r33 = h3d_scene_Object_getInvPos(((h3d__scene__Object)r7));
	if( r19 == NULL ) hl_null_access();
	r34 = r19->px;
	r35 = r19->py;
	r36 = r19->pz;
	if( r33 == NULL ) hl_null_access();
	r41 = r33->_11;
	r40 = r34 * r41;
	r43 = r33->_21;
	r41 = r35 * r43;
	r40 = r40 + r41;
	r43 = r33->_31;
	r41 = r36 * r43;
	r40 = r40 + r41;
	r41 = r33->_41;
	r40 = r40 + r41;
	r37 = r40;
	r41 = r33->_12;
	r40 = r34 * r41;
	r43 = r33->_22;
	r41 = r35 * r43;
	r40 = r40 + r41;
	r43 = r33->_32;
	r41 = r36 * r43;
	r40 = r40 + r41;
	r41 = r33->_42;
	r40 = r40 + r41;
	r38 = r40;
	r41 = r33->_13;
	r40 = r34 * r41;
	r43 = r33->_23;
	r41 = r35 * r43;
	r40 = r40 + r41;
	r43 = r33->_33;
	r41 = r36 * r43;
	r40 = r40 + r41;
	r41 = r33->_43;
	r40 = r40 + r41;
	r39 = r40;
	r19->px = r37;
	r19->py = r38;
	r19->pz = r39;
	r40 = r19->lx;
	r41 = r19->ly;
	r43 = r19->lz;
	r48 = r33->_11;
	r47 = r40 * r48;
	r49 = r33->_21;
	r48 = r41 * r49;
	r47 = r47 + r48;
	r49 = r33->_31;
	r48 = r43 * r49;
	r47 = r47 + r48;
	r44 = r47;
	r48 = r33->_12;
	r47 = r40 * r48;
	r49 = r33->_22;
	r48 = r41 * r49;
	r47 = r47 + r48;
	r49 = r33->_32;
	r48 = r43 * r49;
	r47 = r47 + r48;
	r45 = r47;
	r48 = r33->_13;
	r47 = r40 * r48;
	r49 = r33->_23;
	r48 = r41 * r49;
	r47 = r47 + r48;
	r49 = r33->_33;
	r48 = r43 * r49;
	r47 = r47 + r48;
	r46 = r47;
	r19->lx = r44;
	r19->ly = r45;
	r19->lz = r46;
	h3d_col_Ray_normalize(r19);
	r34 = r19->lx;
	r35 = r19->lx;
	if( r34 == r35 ) goto label$1160$192;
	r19->px = r20;
	r19->py = r21;
	r19->pz = r22;
	r19->lx = r23;
	r19->ly = r24;
	r19->lz = r25;
	goto label$1160$75;
	label$1160$192:
	r50 = r7->shape;
	if( r50 == NULL ) hl_null_access();
	r51 = r7->bestMatch;
	if( hl_vfields(r50)[0] ) r34 = ((double (*)(vdynamic*,h3d__col__Ray,bool))hl_vfields(r50)[0])(r50->value,r19,r51); else {
		void *args[] = {r19,&r51};
		vdynamic ret;
		hl_dyn_call_obj(r50->value,&type$253,69795042/*rayIntersection*/,args,&ret);
		r34 = (double)ret.v.d;
	}
	r26 = 0;
	r36 = (double)r26;
	if( !(r34 < r36) ) goto label$1160$206;
	r19->px = r20;
	r19->py = r21;
	r19->pz = r22;
	r19->lx = r23;
	r19->ly = r24;
	r19->lz = r25;
	goto label$1160$75;
	label$1160$206:
	r35 = r19->px;
	r37 = r19->lx;
	r36 = r34 * r37;
	r35 = r35 + r36;
	r36 = r19->py;
	r38 = r19->ly;
	r37 = r34 * r38;
	r36 = r36 + r37;
	r37 = r19->pz;
	r39 = r19->lz;
	r38 = r34 * r39;
	r37 = r37 + r38;
	r19->px = r20;
	r19->py = r21;
	r19->pz = r22;
	r19->lx = r23;
	r19->ly = r24;
	r19->lz = r25;
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r18->x = r35;
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r18->y = r36;
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r18->z = r37;
	r26 = r7->priority;
	if( r4 >= r26 ) goto label$1160$249;
	label$1160$235:
	r28 = r0->hitInteractives;
	if( r28 == NULL ) hl_null_access();
	r26 = r28->length;
	r27 = 0;
	if( r27 >= r26 ) goto label$1160$246;
	r28 = r0->hitInteractives;
	if( r28 == NULL ) hl_null_access();
	r8 = hl_types_ArrayObj_pop(r28);
	r30 = (h3d__scene__Interactive)r8;
	goto label$1160$235;
	label$1160$246:
	if( r7 == NULL ) hl_null_access();
	r26 = r7->priority;
	r4 = r26;
	label$1160$249:
	r28 = r0->hitInteractives;
	if( r28 == NULL ) hl_null_access();
	r26 = hl_types_ArrayObj_push(r28,((vdynamic*)r7));
	goto label$1160$75;
	label$1160$253:
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->length;
	r26 = 0;
	if( r6 != r26 ) goto label$1160$260;
	r7 = NULL;
	return r7;
	label$1160$260:
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->length;
	r26 = 1;
	if( r26 >= r6 ) goto label$1160$513;
	r6 = 0;
	r5 = r0->hitInteractives;
	label$1160$267:
	if( r5 == NULL ) hl_null_access();
	r27 = r5->length;
	if( r6 >= r27 ) goto label$1160$505;
	r27 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r27) ) goto label$1160$275;
	r7 = NULL;
	goto label$1160$278;
	label$1160$275:
	r29 = r5->array;
	r8 = ((vdynamic**)(r29 + 1))[r6];
	r7 = (h3d__scene__Interactive)r8;
	label$1160$278:
	++r6;
	if( r7 == NULL ) hl_null_access();
	r33 = r7->invPos;
	r34 = 0.;
	r50 = r7->preciseShape;
	if( !r50 ) goto label$1160$396;
	if( r19 == NULL ) hl_null_access();
	r35 = r19->px;
	r36 = r19->py;
	r37 = r19->pz;
	if( r33 == NULL ) hl_null_access();
	r43 = r33->_11;
	r41 = r35 * r43;
	r44 = r33->_21;
	r43 = r36 * r44;
	r41 = r41 + r43;
	r44 = r33->_31;
	r43 = r37 * r44;
	r41 = r41 + r43;
	r43 = r33->_41;
	r41 = r41 + r43;
	r38 = r41;
	r43 = r33->_12;
	r41 = r35 * r43;
	r44 = r33->_22;
	r43 = r36 * r44;
	r41 = r41 + r43;
	r44 = r33->_32;
	r43 = r37 * r44;
	r41 = r41 + r43;
	r43 = r33->_42;
	r41 = r41 + r43;
	r39 = r41;
	r43 = r33->_13;
	r41 = r35 * r43;
	r44 = r33->_23;
	r43 = r36 * r44;
	r41 = r41 + r43;
	r44 = r33->_33;
	r43 = r37 * r44;
	r41 = r41 + r43;
	r43 = r33->_43;
	r41 = r41 + r43;
	r40 = r41;
	r19->px = r38;
	r19->py = r39;
	r19->pz = r40;
	r41 = r19->lx;
	r43 = r19->ly;
	r44 = r19->lz;
	r49 = r33->_11;
	r48 = r41 * r49;
	r52 = r33->_21;
	r49 = r43 * r52;
	r48 = r48 + r49;
	r52 = r33->_31;
	r49 = r44 * r52;
	r48 = r48 + r49;
	r45 = r48;
	r49 = r33->_12;
	r48 = r41 * r49;
	r52 = r33->_22;
	r49 = r43 * r52;
	r48 = r48 + r49;
	r52 = r33->_32;
	r49 = r44 * r52;
	r48 = r48 + r49;
	r46 = r48;
	r49 = r33->_13;
	r48 = r41 * r49;
	r52 = r33->_23;
	r49 = r43 * r52;
	r48 = r48 + r49;
	r52 = r33->_33;
	r49 = r44 * r52;
	r48 = r48 + r49;
	r47 = r48;
	r19->lx = r45;
	r19->ly = r46;
	r19->lz = r47;
	h3d_col_Ray_normalize(r19);
	r50 = r7->preciseShape;
	if( r50 == NULL ) hl_null_access();
	r51 = r7->bestMatch;
	if( hl_vfields(r50)[0] ) r35 = ((double (*)(vdynamic*,h3d__col__Ray,bool))hl_vfields(r50)[0])(r50->value,r19,r51); else {
		void *args[] = {r19,&r51};
		vdynamic ret;
		hl_dyn_call_obj(r50->value,&type$253,69795042/*rayIntersection*/,args,&ret);
		r35 = (double)ret.v.d;
	}
	r26 = 0;
	r37 = (double)r26;
	if( !(r37 < r35) ) goto label$1160$388;
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r36 = r19->px;
	r38 = r19->lx;
	r37 = r35 * r38;
	r36 = r36 + r37;
	r18->x = r36;
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r36 = r19->py;
	r38 = r19->ly;
	r37 = r35 * r38;
	r36 = r36 + r37;
	r18->y = r36;
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r36 = r19->pz;
	r38 = r19->lz;
	r37 = r35 * r38;
	r36 = r36 + r37;
	r18->z = r36;
	goto label$1160$390;
	label$1160$388:
	r36 = 1.;
	r34 = r36;
	label$1160$390:
	r19->px = r20;
	r19->py = r21;
	r19->pz = r22;
	r19->lx = r23;
	r19->ly = r24;
	r19->lz = r25;
	label$1160$396:
	r18 = r7->hitPoint;
	if( r18 == NULL ) hl_null_access();
	r35 = r18->x;
	r36 = r18->y;
	r37 = r18->z;
	r41 = r18->w;
	r26 = 1;
	r43 = (double)r26;
	r41 = r43;
	r42 = r7->absPos;
	if( r42 == NULL ) hl_null_access();
	r44 = r42->_11;
	r43 = r35 * r44;
	r45 = r42->_21;
	r44 = r36 * r45;
	r43 = r43 + r44;
	r45 = r42->_31;
	r44 = r37 * r45;
	r43 = r43 + r44;
	r45 = r42->_41;
	r44 = r41 * r45;
	r43 = r43 + r44;
	r38 = r43;
	r44 = r42->_12;
	r43 = r35 * r44;
	r45 = r42->_22;
	r44 = r36 * r45;
	r43 = r43 + r44;
	r45 = r42->_32;
	r44 = r37 * r45;
	r43 = r43 + r44;
	r45 = r42->_42;
	r44 = r41 * r45;
	r43 = r43 + r44;
	r39 = r43;
	r44 = r42->_13;
	r43 = r35 * r44;
	r45 = r42->_23;
	r44 = r36 * r45;
	r43 = r43 + r44;
	r45 = r42->_33;
	r44 = r37 * r45;
	r43 = r43 + r44;
	r45 = r42->_43;
	r44 = r41 * r45;
	r43 = r43 + r44;
	r40 = r43;
	r14 = r0->camera;
	if( r14 == NULL ) hl_null_access();
	r42 = r14->m;
	if( r42 == NULL ) hl_null_access();
	r44 = r42->_12;
	r43 = r38 * r44;
	r45 = r42->_22;
	r44 = r39 * r45;
	r43 = r43 + r44;
	r45 = r42->_32;
	r44 = r40 * r45;
	r43 = r43 + r44;
	r45 = r42->_42;
	r44 = r41 * r45;
	r43 = r43 + r44;
	r45 = r42->_13;
	r44 = r38 * r45;
	r46 = r42->_23;
	r45 = r39 * r46;
	r44 = r44 + r45;
	r46 = r42->_33;
	r45 = r40 * r46;
	r44 = r44 + r45;
	r46 = r42->_43;
	r45 = r41 * r46;
	r44 = r44 + r45;
	r26 = 1;
	r45 = (double)r26;
	r47 = r42->_14;
	r46 = r38 * r47;
	r48 = r42->_24;
	r47 = r39 * r48;
	r46 = r46 + r47;
	r48 = r42->_34;
	r47 = r40 * r48;
	r46 = r46 + r47;
	r48 = r42->_44;
	r47 = r41 * r48;
	r46 = r46 + r47;
	r45 = r45 / r46;
	r47 = r42->_11;
	r46 = r38 * r47;
	r48 = r42->_21;
	r47 = r39 * r48;
	r46 = r46 + r47;
	r48 = r42->_31;
	r47 = r40 * r48;
	r46 = r46 + r47;
	r48 = r42->_41;
	r47 = r41 * r48;
	r46 = r46 + r47;
	r46 = r46 * r45;
	r46 = r43 * r45;
	r46 = r44 * r45;
	r40 = r46;
	r26 = 1;
	r46 = (double)r26;
	r53 = r7->hitPoint;
	if( r53 == NULL ) hl_null_access();
	r43 = r40 + r34;
	r53->w = r43;
	goto label$1160$267;
	label$1160$505:
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r54 = hl_alloc_closure_ptr(&type$2670,h3d_scene_Scene_sortHitPointByCameraDistance,r0);
	if( r54 ) goto label$1160$511;
	r55 = NULL;
	goto label$1160$512;
	label$1160$511:
	r55 = hl_alloc_closure_ptr(&type$2673,fun$3044,r54);
	label$1160$512:
	hl_types_ArrayObj_sort(r5,r55);
	label$1160$513:
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r7 = NULL;
	hl_types_ArrayObj_unshift(r5,((vdynamic*)r7));
	label$1160$517:
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	r6 = 0;
	if( r6 >= r4 ) goto label$1160$560;
	r5 = r0->hitInteractives;
	if( r5 == NULL ) hl_null_access();
	r8 = hl_types_ArrayObj_pop(r5);
	r7 = (h3d__scene__Interactive)r8;
	if( r7 ) goto label$1160$530;
	r30 = NULL;
	return r30;
	label$1160$530:
	if( r1 == NULL ) hl_null_access();
	if( r7 == NULL ) hl_null_access();
	r13 = r7->hitPoint;
	if( r13 == NULL ) hl_null_access();
	r9 = r13->x;
	r1->relX = r9;
	r13 = r7->hitPoint;
	if( r13 == NULL ) hl_null_access();
	r9 = r13->y;
	r1->relY = r9;
	r13 = r7->hitPoint;
	if( r13 == NULL ) hl_null_access();
	r9 = r13->z;
	r1->relZ = r9;
	h3d_scene_Interactive_handleEvent(r7,r1);
	r51 = r1->cancel;
	if( !r51 ) goto label$1160$552;
	r51 = false;
	r1->cancel = r51;
	r51 = false;
	r1->propagate = r51;
	goto label$1160$517;
	label$1160$552:
	r51 = r1->propagate;
	if( r51 ) goto label$1160$559;
	r56 = &type$2627;
	r4 = 0;
	r29 = hl_alloc_array(r56,r4);
	r5 = hl_types_ArrayObj_alloc(r29);
	r0->hitInteractives = r5;
	label$1160$559:
	return r7;
	label$1160$560:
	r7 = NULL;
	return r7;
}

h3d__scene__Object h3d_scene_Scene_clone(h3d__scene__Scene r0,h3d__scene__Object r1) {
	h3d__scene__Scene r2;
	h3d__Camera r5;
	h3d__scene__Object r3;
	if( r1 ) goto label$1161$4;
	r2 = (h3d__scene__Scene)hl_alloc_obj(h3d__scene__Scene__val);
	h3d_scene_Scene_new(r2);
	goto label$1161$5;
	label$1161$4:
	r2 = (h3d__scene__Scene)hl_dyn_castp(&r1,&type$1302,&type$1304);
	label$1161$5:
	if( r2 == NULL ) hl_null_access();
	r5 = r0->camera;
	if( r5 == NULL ) hl_null_access();
	r5 = h3d_Camera_clone(r5);
	r2->camera = r5;
	r3 = h3d_scene_Object_clone(((h3d__scene__Object)r0),((h3d__scene__Object)r2));
	return ((h3d__scene__Object)r2);
}

void h3d_scene_Scene_dispose(h3d__scene__Scene r0) {
	h3d__scene__Renderer r3;
	h3d__pass__HardwarePick r2;
	h3d_scene_Object_dispose(((h3d__scene__Object)r0));
	r2 = r0->hardwarePass;
	if( !r2 ) goto label$1162$8;
	r2 = r0->hardwarePass;
	if( r2 == NULL ) hl_null_access();
	h3d_pass_HardwarePick_dispose(r2);
	r2 = NULL;
	r0->hardwarePass = r2;
	label$1162$8:
	r3 = r0->renderer;
	if( r3 == NULL ) hl_null_access();
	h3d_scene_Renderer_dispose(r3);
	r3 = (h3d__scene__Renderer)hl_alloc_obj(h3d__scene__Renderer__val);
	h3d_scene_Renderer_new(r3);
	r3 = h3d_scene_Scene_set_renderer(r0,r3);
	return;
}

void h3d_scene_Scene_addEventTarget(h3d__scene__Scene r0,h3d__scene__Interactive r1) {
	hl__types__ArrayObj r3;
	int r2;
	r3 = r0->interactives;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r3,((vdynamic*)r1));
	return;
}

void h3d_scene_Scene_removeEventTarget(h3d__scene__Scene r0,h3d__scene__Interactive r1) {
	vvirtual *r6;
	hl__types__ArrayObj r4;
	bool r3;
	hxd__SceneEvents r5;
	r4 = r0->interactives;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_remove(r4,((vdynamic*)r1));
	if( !r3 ) goto label$1164$16;
	r5 = r0->events;
	if( !r5 ) goto label$1164$16;
	r5 = r0->events;
	if( r5 == NULL ) hl_null_access();
	if( r1 ) goto label$1164$11;
	r6 = NULL;
	goto label$1164$15;
	label$1164$11:
	r6 = r1->$_f42;
	if( r6 ) goto label$1164$15;
	r6 = hl_to_virtual(&type$1316,(vdynamic*)r1);
	r1->$_f42 = r6;
	label$1164$15:
	hxd_SceneEvents_onRemove(r5,r6);
	label$1164$16:
	return;
}

void h3d_scene_Scene_setElapsedTime(h3d__scene__Scene r0,double r1) {
	h3d__scene__RenderContext r2;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r2->elapsedTime = r1;
	return;
}

h3d__scene__Object h3d_scene_Scene_hardwarePick(h3d__scene__Scene r0,double r1,double r2) {
	String r32;
	vvirtual *r26, *r30;
	venum *r19;
	h3d__scene__Scene r34;
	h3d__pass__HardwarePick r24, r25;
	h3d__Camera r6;
	h3d__Engine r4, r9;
	h3d__pass__Object r22, r23;
	h3d__$Engine r5;
	h3d__col__Ray r12;
	vclosure *r18;
	double r7, r10, r13, r14, r15, r16, r17;
	vdynamic *r29, *r31;
	h3d__scene__RenderContext r11;
	h3d__mat__Texture r27;
	h3d__scene__Object r21, r33;
	h3d__scene__LightSystem r20;
	int r8, r28;
	r5 = (h3d__$Engine)global$38;
	r4 = r5->CURRENT;
	r6 = r0->camera;
	if( r6 == NULL ) hl_null_access();
	if( r4 == NULL ) hl_null_access();
	r8 = r4->width;
	r7 = (double)r8;
	r8 = r4->height;
	r10 = (double)r8;
	r7 = r7 / r10;
	r6->screenRatio = r7;
	r6 = r0->camera;
	if( r6 == NULL ) hl_null_access();
	h3d_Camera_update(r6);
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r6 = r0->camera;
	r11->camera = r6;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r11->engine = r4;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r11->scene = r0;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	h3d_scene_RenderContext_start(r11);
	r6 = r0->camera;
	if( r6 == NULL ) hl_null_access();
	r12 = h3d_Camera_rayFromScreen(r6,r1,r2);
	if( r12 == NULL ) hl_null_access();
	r10 = r12->px;
	r7 = r10;
	r13 = r12->py;
	r10 = r13;
	r14 = r12->pz;
	r13 = r14;
	r15 = r12->lx;
	r14 = r15;
	r16 = r12->ly;
	r15 = r16;
	r17 = r12->lz;
	r19 = hl_alloc_enum(&type$2680,0);
	((Enum$2680*)r19)->p0 = (h3d__col__Ray)r12;
	((Enum$2680*)r19)->p1 = (h3d__scene__Scene)r0;
	((Enum$2680*)r19)->p2 = (double)r7;
	((Enum$2680*)r19)->p3 = (double)r10;
	((Enum$2680*)r19)->p4 = (double)r13;
	((Enum$2680*)r19)->p5 = (double)r14;
	((Enum$2680*)r19)->p6 = (double)r15;
	((Enum$2680*)r19)->p7 = (double)r17;
	r18 = hl_alloc_closure_ptr(&type$2679,fun$3045,r19);
	h3d_scene_Object_iterVisibleMeshes(((h3d__scene__Object)r0),r18);
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r20 = NULL;
	r11->lightSystem = r20;
	r21 = NULL;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r22 = r11->passes;
	if( !r22 ) goto label$1166$110;
	r24 = r0->hardwarePass;
	if( r24 ) goto label$1166$68;
	r25 = (h3d__pass__HardwarePick)hl_alloc_obj(h3d__pass__HardwarePick__val);
	h3d_pass_HardwarePick_new(r25);
	r24 = r25;
	r0->hardwarePass = r25;
	label$1166$68:
	r11 = r0->ctx;
	r26 = hl_alloc_virtual(&type$2538);
	r8 = 267386880;
	r28 = 0;
	r17 = (double)r28;
	r29 = hl_alloc_dynamic(&type$6);
	r29->v.d = r17;
	r30 = NULL;
	r27 = h3d_mat_Texture_fromColor(r8,r29,r30);
	if( hl_vfields(r26)[0] ) *(h3d__mat__Texture*)(hl_vfields(r26)[0]) = (h3d__mat__Texture)r27; else hl_dyn_setp(r26->value,-18823348/*texture*/,&type$93,r27);
	if( r11 == NULL ) hl_null_access();
	r32 = (String)global$720;
	r31 = hxsl_Globals_allocID(r32);
	r8 = r31 ? r31->v.i : 0;
	h3d_scene_RenderContext_setGlobalID(r11,r8,((vdynamic*)r26));
	if( r24 == NULL ) hl_null_access();
	r24->pickX = r1;
	r24->pickY = r2;
	r11 = r0->ctx;
	h3d_pass_Base_setContext(((h3d__pass__Base)r24),r11);
	r23 = h3d_pass_HardwarePick_draw(r24,r22);
	r22 = r23;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r11->passes = r23;
	r8 = r24->pickedIndex;
	r28 = 0;
	if( r8 < r28 ) goto label$1166$110;
	label$1166$95:
	if( r24 == NULL ) hl_null_access();
	r8 = r24->pickedIndex;
	r28 = 0;
	if( r28 >= r8 ) goto label$1166$107;
	r8 = r24->pickedIndex;
	--r8;
	r24->pickedIndex = r8;
	if( r22 == NULL ) hl_null_access();
	r23 = r22->next;
	r22 = r23;
	goto label$1166$95;
	label$1166$107:
	if( r22 == NULL ) hl_null_access();
	r33 = r22->obj;
	r21 = r33;
	label$1166$110:
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	h3d_scene_RenderContext_done(r11);
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r6 = NULL;
	r11->camera = r6;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r9 = NULL;
	r11->engine = r9;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r34 = NULL;
	r11->scene = r34;
	return r21;
}

void h3d_scene_Scene_syncOnly(h3d__scene__Scene r0,double r1) {
	h3d__scene__Scene r12;
	h3d__Camera r8;
	h3d__Engine r2, r7;
	h3d__$Engine r3;
	double r5, r10;
	h3d__scene__RenderContext r11;
	int r9;
	h3d__mat__Texture r6;
	r3 = (h3d__$Engine)global$38;
	r2 = r3->CURRENT;
	h3d_scene_Scene_setElapsedTime(r0,r1);
	if( r2 == NULL ) hl_null_access();
	r6 = h3d_Engine_getCurrentTarget(r2);
	if( r6 ) goto label$1167$15;
	r8 = r0->camera;
	if( r8 == NULL ) hl_null_access();
	r9 = r2->width;
	r5 = (double)r9;
	r9 = r2->height;
	r10 = (double)r9;
	r5 = r5 / r10;
	r8->screenRatio = r5;
	goto label$1167$24;
	label$1167$15:
	r8 = r0->camera;
	if( r8 == NULL ) hl_null_access();
	if( r6 == NULL ) hl_null_access();
	r9 = r6->width;
	r5 = (double)r9;
	r9 = r6->height;
	r10 = (double)r9;
	r5 = r5 / r10;
	r8->screenRatio = r5;
	label$1167$24:
	r8 = r0->camera;
	if( r8 == NULL ) hl_null_access();
	h3d_Camera_update(r8);
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r8 = r0->camera;
	r11->camera = r8;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r11->engine = r2;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r11->scene = r0;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	h3d_scene_RenderContext_start(r11);
	r11 = r0->ctx;
	h3d_scene_Object_syncRec(((h3d__scene__Object)r0),r11);
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r8 = NULL;
	r11->camera = r8;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r7 = NULL;
	r11->engine = r7;
	r11 = r0->ctx;
	if( r11 == NULL ) hl_null_access();
	r12 = NULL;
	r11->scene = r12;
	return;
}

void h3d_scene_Scene_computeStatic(h3d__scene__Scene r0) {
	bool r6;
	h3d__Engine r7;
	h3d__$Engine r8;
	double r1, r5;
	h3d__scene__RenderContext r2;
	int r4;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->elapsedTime;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r4 = 0;
	r5 = (double)r4;
	r2->elapsedTime = r5;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r6 = true;
	r2->computingStatic = r6;
	r8 = (h3d__$Engine)global$38;
	r7 = r8->CURRENT;
	h3d_scene_Scene_render(r0,r7);
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r6 = false;
	r2->computingStatic = r6;
	r2 = r0->ctx;
	if( r2 == NULL ) hl_null_access();
	r2->elapsedTime = r1;
	return;
}

void h3d_scene_Scene_render(h3d__scene__Scene r0,h3d__Engine r1) {
	String r29;
	h3d__scene__PassObjects r28;
	hl__types__ArrayObj r25;
	hl_type *r27;
	bool r15;
	h3d__scene__Scene r32;
	h3d__scene__Renderer r31;
	h3d__Camera r7;
	h3d__Engine r6;
	h3d__pass__Object r11, r12, r13, r16, r17, r20, r22, r24;
	h3d__mat__Pass r23;
	double r8, r9;
	h3d__scene__RenderContext r10;
	h3d__scene__LightSystem r30;
	varray *r26;
	h3d__mat__Texture r5;
	int r3, r4, r14, r18, r19, r21;
	r3 = r0->flags;
	r4 = 32;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 != r4 ) goto label$1169$6;
	h3d_scene_Object_onAdd(((h3d__scene__Object)r0));
	label$1169$6:
	if( r1 == NULL ) hl_null_access();
	r5 = h3d_Engine_getCurrentTarget(r1);
	if( r5 ) goto label$1169$18;
	r7 = r0->camera;
	if( r7 == NULL ) hl_null_access();
	r3 = r1->width;
	r8 = (double)r3;
	r3 = r1->height;
	r9 = (double)r3;
	r8 = r8 / r9;
	r7->screenRatio = r8;
	goto label$1169$27;
	label$1169$18:
	r7 = r0->camera;
	if( r7 == NULL ) hl_null_access();
	if( r5 == NULL ) hl_null_access();
	r3 = r5->width;
	r8 = (double)r3;
	r3 = r5->height;
	r9 = (double)r3;
	r8 = r8 / r9;
	r7->screenRatio = r8;
	label$1169$27:
	r7 = r0->camera;
	if( r7 == NULL ) hl_null_access();
	h3d_Camera_update(r7);
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r7 = r0->camera;
	r10->camera = r7;
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r10->engine = r1;
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r10->scene = r0;
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	h3d_scene_RenderContext_start(r10);
	r10 = r0->ctx;
	h3d_scene_Object_syncRec(((h3d__scene__Object)r0),r10);
	r10 = r0->ctx;
	h3d_scene_Object_emitRec(((h3d__scene__Object)r0),r10);
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->passes;
	if( r11 ) goto label$1169$54;
	r13 = NULL;
	r12 = r13;
	goto label$1169$144;
	label$1169$54:
	r3 = 1;
	r4 = 0;
	r14 = 0;
	label$1169$57:
	r15 = true;
	if( !r15 ) goto label$1169$143;
	r13 = r11;
	r16 = NULL;
	r11 = r16;
	r17 = NULL;
	r16 = r17;
	r19 = 0;
	r18 = r19;
	label$1169$67:
	if( !r13 ) goto label$1169$133;
	++r18;
	r17 = r13;
	r19 = 0;
	r4 = r19;
	r19 = 0;
	r21 = r3;
	label$1169$75:
	if( r19 >= r21 ) goto label$1169$85;
	++r19;
	++r4;
	if( r17 == NULL ) hl_null_access();
	r20 = r17->next;
	r17 = r20;
	if( r20 ) goto label$1169$84;
	goto label$1169$85;
	label$1169$84:
	goto label$1169$75;
	label$1169$85:
	r14 = r3;
	label$1169$86:
	r21 = 0;
	if( r21 < r4 ) goto label$1169$92;
	r21 = 0;
	if( r21 >= r14 ) goto label$1169$131;
	if( !r17 ) goto label$1169$131;
	label$1169$92:
	r21 = 0;
	if( r4 != r21 ) goto label$1169$100;
	r20 = r17;
	if( r17 == NULL ) hl_null_access();
	r22 = r17->next;
	r17 = r22;
	--r14;
	goto label$1169$124;
	label$1169$100:
	r21 = 0;
	if( r14 == r21 ) goto label$1169$114;
	if( !r17 ) goto label$1169$114;
	if( r13 == NULL ) hl_null_access();
	r23 = r13->pass;
	if( r23 == NULL ) hl_null_access();
	r19 = r23->passId;
	if( r17 == NULL ) hl_null_access();
	r23 = r17->pass;
	if( r23 == NULL ) hl_null_access();
	r21 = r23->passId;
	r19 = r19 - r21;
	r21 = 0;
	if( r21 < r19 ) goto label$1169$120;
	label$1169$114:
	r20 = r13;
	if( r13 == NULL ) hl_null_access();
	r22 = r13->next;
	r13 = r22;
	--r4;
	goto label$1169$124;
	label$1169$120:
	r20 = r17;
	r22 = r17->next;
	r17 = r22;
	--r14;
	label$1169$124:
	if( !r16 ) goto label$1169$128;
	if( r16 == NULL ) hl_null_access();
	r16->next = r20;
	goto label$1169$129;
	label$1169$128:
	r11 = r20;
	label$1169$129:
	r16 = r20;
	goto label$1169$86;
	label$1169$131:
	r13 = r17;
	goto label$1169$67;
	label$1169$133:
	if( r16 == NULL ) hl_null_access();
	r24 = NULL;
	r16->next = r24;
	r21 = 1;
	if( r21 < r18 ) goto label$1169$139;
	goto label$1169$143;
	label$1169$139:
	r21 = 2;
	r19 = r3 * r21;
	r3 = r19;
	goto label$1169$57;
	label$1169$143:
	r12 = r11;
	label$1169$144:
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r10->passes = r12;
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r13 = r10->passes;
	r27 = &type$2559;
	r3 = 0;
	r26 = hl_alloc_array(r27,r3);
	r25 = hl_types_ArrayObj_alloc(r26);
	label$1169$154:
	if( !r13 ) goto label$1169$186;
	if( r13 == NULL ) hl_null_access();
	r23 = r13->pass;
	if( r23 == NULL ) hl_null_access();
	r3 = r23->passId;
	r16 = r13;
	r17 = NULL;
	label$1169$162:
	if( !r16 ) goto label$1169$173;
	if( r16 == NULL ) hl_null_access();
	r23 = r16->pass;
	if( r23 == NULL ) hl_null_access();
	r4 = r23->passId;
	if( r4 != r3 ) goto label$1169$173;
	r17 = r16;
	r20 = r16->next;
	r16 = r20;
	goto label$1169$162;
	label$1169$173:
	if( r17 == NULL ) hl_null_access();
	r22 = NULL;
	r17->next = r22;
	if( r25 == NULL ) hl_null_access();
	r28 = (h3d__scene__PassObjects)hl_alloc_obj(h3d__scene__PassObjects__val);
	if( r13 == NULL ) hl_null_access();
	r23 = r13->pass;
	if( r23 == NULL ) hl_null_access();
	r29 = r23->name;
	h3d_scene_PassObjects_new(r28,r29,r13);
	r4 = hl_types_ArrayObj_push(r25,((vdynamic*)r28));
	r13 = r16;
	goto label$1169$154;
	label$1169$186:
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r30 = r0->lightSystem;
	r10->lightSystem = r30;
	r30 = r0->lightSystem;
	if( r30 == NULL ) hl_null_access();
	r10 = r0->ctx;
	h3d_scene_LightSystem_initLights(r30,r10);
	r31 = r0->renderer;
	if( r31 == NULL ) hl_null_access();
	h3d_scene_Renderer_process(r31,r25);
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	h3d_scene_RenderContext_done(r10);
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r32 = NULL;
	r10->scene = r32;
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r7 = NULL;
	r10->camera = r7;
	r10 = r0->ctx;
	if( r10 == NULL ) hl_null_access();
	r6 = NULL;
	r10->engine = r6;
	return;
}

haxe__io__Bytes h3d_scene_Scene_serializeScene(h3d__scene__Scene r0) {
	String r1;
	r1 = (String)global$733;
	hl_throw((vdynamic*)r1);
}

void h3d_scene_Scene_new(h3d__scene__Scene r0) {
	bool *r14;
	hl__types__ArrayObj r4;
	hl_type *r6;
	h3d__scene__Renderer r20;
	h3d__Camera r8;
	h3d__Engine r15;
	hxd__Window r3;
	h3d__mat__$MaterialSetup r22;
	h3d__$Engine r16;
	h3d__mat__MaterialSetup r21;
	double r17, r18;
	h3d__scene__RenderContext r19;
	double *r9, *r10, *r11, *r12, *r13;
	h3d__scene__LightSystem r23;
	int r7;
	varray *r5;
	h3d__scene__Object r2;
	r2 = NULL;
	h3d_scene_Object_new(((h3d__scene__Object)r0),r2);
	r3 = hxd_Window_getInstance();
	r0->window = r3;
	r6 = &type$676;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	r0->eventListeners = r4;
	r6 = &type$2627;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	r0->hitInteractives = r4;
	r6 = &type$2627;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	r0->interactives = r4;
	r8 = (h3d__Camera)hl_alloc_obj(h3d__Camera__val);
	r9 = NULL;
	r10 = NULL;
	r11 = NULL;
	r12 = NULL;
	r13 = NULL;
	r14 = NULL;
	h3d_Camera_new(r8,r9,r10,r11,r12,r13,r14);
	r0->camera = r8;
	r16 = (h3d__$Engine)global$38;
	r15 = r16->CURRENT;
	if( !r15 ) goto label$1742$40;
	r8 = r0->camera;
	if( r8 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r7 = r15->width;
	r17 = (double)r7;
	r7 = r15->height;
	r18 = (double)r7;
	r17 = r17 / r18;
	r8->screenRatio = r17;
	label$1742$40:
	r19 = (h3d__scene__RenderContext)hl_alloc_obj(h3d__scene__RenderContext__val);
	h3d_scene_RenderContext_new(r19);
	r0->ctx = r19;
	r22 = (h3d__mat__$MaterialSetup)global$558;
	r21 = r22->current;
	if( r21 == NULL ) hl_null_access();
	r20 = h3d_mat_MaterialSetup_createRenderer(r21);
	r20 = h3d_scene_Scene_set_renderer(r0,r20);
	r22 = (h3d__mat__$MaterialSetup)global$558;
	r21 = r22->current;
	if( r21 == NULL ) hl_null_access();
	r23 = h3d_mat_MaterialSetup_createLightSystem(r21);
	r0->lightSystem = r23;
	return;
}

