﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h2d_TileGroup_getBoundsRec(h2d__TileGroup r0,h2d__Object r1,h2d__col__Bounds r2,bool r3) {
	h2d___TileGroup__TileLayerContent r6;
	double r5, r7, r8, r9, r10;
	h2d_Object_getBoundsRec(((h2d__Object)r0),r1,r2,r3);
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->xMin;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->yMin;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->xMax;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->xMin;
	r8 = r8 - r9;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->yMax;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->yMin;
	r9 = r9 - r10;
	h2d_Object_addBounds(((h2d__Object)r0),r1,r2,r5,r7,r8,r9);
	return;
}

void h2d_TileGroup_clear(h2d__TileGroup r0) {
	h2d___TileGroup__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h2d__TileGroup_TileLayerContent_clear(r2);
	return;
}

void h2d_TileGroup_invalidate(h2d__TileGroup r0) {
	h2d___TileGroup__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h3d_prim_Primitive_dispose(((h3d__prim__Primitive)r2));
	return;
}

int h2d_TileGroup_count(h2d__TileGroup r0) {
	h2d___TileGroup__TileLayerContent r2;
	int r1, r3;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	r1 = h2d__TileGroup_TileLayerContent_triCount(r2);
	r3 = 1;
	r1 = r1 >> r3;
	return r1;
}

void h2d_TileGroup_onRemove(h2d__TileGroup r0) {
	h2d___TileGroup__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h3d_prim_Primitive_dispose(((h3d__prim__Primitive)r2));
	h2d_Object_onRemove(((h2d__Object)r0));
	return;
}

void h2d_TileGroup_setDefaultColor(h2d__TileGroup r0,int r1,double* r2) {
	h3d__Vector r4;
	double r3, r5, r8;
	int r6, r7;
	if( r2 ) goto label$1812$3;
	r3 = 1.;
	goto label$1812$4;
	label$1812$3:
	r3 = *r2;
	label$1812$4:
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 16;
	r6 = r1 >> r7;
	r7 = 255;
	r6 = r6 & r7;
	r5 = (double)r6;
	r6 = 255;
	r8 = (double)r6;
	r5 = r5 / r8;
	r4->x = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 8;
	r6 = r1 >> r7;
	r7 = 255;
	r6 = r6 & r7;
	r5 = (double)r6;
	r6 = 255;
	r8 = (double)r6;
	r5 = r5 / r8;
	r4->y = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 255;
	r6 = r1 & r7;
	r5 = (double)r6;
	r6 = 255;
	r8 = (double)r6;
	r5 = r5 / r8;
	r4->z = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r4->w = r3;
	return;
}

void h2d_TileGroup_add(h2d__TileGroup r0,int r1,int r2,h2d__Tile r3) {
	h3d__Vector r7;
	double r6, r8, r9, r10;
	h2d___TileGroup__TileLayerContent r5;
	r5 = r0->content;
	if( r5 == NULL ) hl_null_access();
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->x;
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->y;
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r9 = r7->z;
	r7 = r0->curColor;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->w;
	h2d__TileGroup_TileLayerContent_add(r5,r1,r2,r6,r8,r9,r10,r3);
	return;
}

void h2d_TileGroup_addColor(h2d__TileGroup r0,int r1,int r2,double r3,double r4,double r5,double r6,h2d__Tile r7) {
	h2d___TileGroup__TileLayerContent r9;
	r9 = r0->content;
	if( r9 == NULL ) hl_null_access();
	h2d__TileGroup_TileLayerContent_add(r9,r1,r2,r3,r4,r5,r6,r7);
	return;
}

void h2d_TileGroup_addAlpha(h2d__TileGroup r0,int r1,int r2,double r3,h2d__Tile r4) {
	h3d__Vector r8;
	double r7, r9, r10;
	h2d___TileGroup__TileLayerContent r6;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r8 = r0->curColor;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->x;
	r8 = r0->curColor;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r8 = r0->curColor;
	if( r8 == NULL ) hl_null_access();
	r10 = r8->z;
	h2d__TileGroup_TileLayerContent_add(r6,r1,r2,r7,r9,r10,r3,r4);
	return;
}

void h2d_TileGroup_addTransform(h2d__TileGroup r0,int r1,int r2,double r3,double r4,double r5,h2d__Tile r6) {
	h3d__Vector r9;
	h2d___TileGroup__TileLayerContent r8;
	r8 = r0->content;
	if( r8 == NULL ) hl_null_access();
	r9 = r0->curColor;
	h2d__TileGroup_TileLayerContent_addTransform(r8,r1,r2,r3,r4,r5,r9,r6);
	return;
}

void h2d_TileGroup_draw(h2d__TileGroup r0,h2d__RenderContext r1) {
	h2d_TileGroup_drawWith(r0,r1,((h2d__Drawable)r0));
	return;
}

void h2d_TileGroup_sync(h2d__TileGroup r0,h2d__RenderContext r1) {
	bool r5;
	h3d__Engine r6;
	h3d__$Engine r7;
	h3d__Buffer r4;
	h2d___TileGroup__TileLayerContent r3;
	h2d_Object_sync(((h2d__Object)r0),r1);
	r3 = r0->content;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->buffer;
	if( !r4 ) goto label$1818$9;
	r4 = r3->buffer;
	if( r4 == NULL ) hl_null_access();
	r5 = h3d_Buffer_isDisposed(r4);
	if( !r5 ) goto label$1818$12;
	label$1818$9:
	r7 = (h3d__$Engine)global$38;
	r6 = r7->CURRENT;
	h2d__TileGroup_TileLayerContent_alloc(r3,r6);
	label$1818$12:
	return;
}

void h2d_TileGroup_drawWith(h2d__TileGroup r0,h2d__RenderContext r1,h2d__Drawable r2) {
	bool r8;
	h2d__Tile r10;
	h3d__Engine r13;
	h2d___TileGroup__TileLayerContent r4;
	h3d__mat__Texture r9;
	int r3, r6, r7, r11, r12;
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r3 = h2d__TileGroup_TileLayerContent_triCount(r4);
	r7 = 0;
	if( r3 != r7 ) goto label$1819$6;
	return;
	label$1819$6:
	if( r1 == NULL ) hl_null_access();
	r10 = r0->tile;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->innerTex;
	r8 = h2d_RenderContext_beginDrawObject(r1,r2,r9);
	if( r8 ) goto label$1819$13;
	return;
	label$1819$13:
	r6 = r0->rangeMin;
	r7 = 0;
	if( r6 >= r7 ) goto label$1819$18;
	r6 = 0;
	goto label$1819$21;
	label$1819$18:
	r6 = r0->rangeMin;
	r7 = 2;
	r6 = r6 * r7;
	label$1819$21:
	r7 = r0->rangeMax;
	r11 = 0;
	if( r11 >= r7 ) goto label$1819$32;
	r7 = r0->rangeMax;
	r12 = 2;
	r11 = r3 * r12;
	if( r7 >= r11 ) goto label$1819$32;
	r7 = r0->rangeMax;
	r11 = 2;
	r7 = r7 * r11;
	r3 = r7;
	label$1819$32:
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r13 = r1->engine;
	r11 = r3 - r6;
	h2d__TileGroup_TileLayerContent_doRender(r4,r13,r6,r11);
	return;
}

void h2d_TileGroup_new(h2d__TileGroup r0,h2d__Tile r1,h2d__Object r2) {
	h3d__Vector r5;
	h2d___TileGroup__TileLayerContent r14;
	double r6, r8, r10, r12;
	double *r7, *r9, *r11, *r13;
	int r4;
	h2d_Drawable_new(((h2d__Drawable)r0),r2);
	r0->tile = r1;
	r4 = -1;
	r0->rangeMax = r4;
	r0->rangeMin = r4;
	r5 = (h3d__Vector)hl_alloc_obj(h3d__Vector__val);
	r4 = 1;
	r6 = (double)r4;
	r7 = &r6;
	r4 = 1;
	r8 = (double)r4;
	r9 = &r8;
	r4 = 1;
	r10 = (double)r4;
	r11 = &r10;
	r4 = 1;
	r12 = (double)r4;
	r13 = &r12;
	h3d_Vector_new(r5,r7,r9,r11,r13);
	r0->curColor = r5;
	r14 = (h2d___TileGroup__TileLayerContent)hl_alloc_obj(h2d___TileGroup__TileLayerContent__val);
	h2d__TileGroup_TileLayerContent_new(r14);
	r0->content = r14;
	return;
}

