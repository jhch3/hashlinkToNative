﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_impl_RenderContext_new(h3d__impl__RenderContext r0) {
	h3d__impl__TextureCache r6;
	h3d__Engine r1;
	h3d__$Engine r2;
	double r4, r5;
	int r3;
	r2 = (h3d__$Engine)global$38;
	r1 = r2->CURRENT;
	r0->engine = r1;
	r3 = 0;
	r0->frame = r3;
	r4 = 0.;
	r0->time = r4;
	r4 = 1.;
	r5 = hxd_System_getDefaultFrameRate();
	r4 = r4 / r5;
	r0->elapsedTime = r4;
	r6 = (h3d__impl__TextureCache)hl_alloc_obj(h3d__impl__TextureCache__val);
	h3d_impl_TextureCache_new(r6,r0);
	r0->textures = r6;
	return;
}

