﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

vdynamic* hxd_Charset_resolveChar(hxd__Charset r0,int r1,haxe__ds__IntMap r2) {
	haxe__ds__IntMap r7;
	vdynamic *r4, *r5, *r6, *r8;
	int r3;
	r4 = hl_alloc_dynamic(&type$3);
	r4->v.i = r1;
	label$1878$1:
	if( !r4 ) goto label$1878$15;
	if( r2 == NULL ) hl_null_access();
	r3 = r4 ? r4->v.i : 0;
	r6 = haxe_ds_IntMap_get(r2,r3);
	if( !r6 ) goto label$1878$8;
	return r6;
	label$1878$8:
	r7 = r0->map;
	if( r7 == NULL ) hl_null_access();
	r3 = r4 ? r4->v.i : 0;
	r8 = haxe_ds_IntMap_get(r7,r3);
	r5 = (vdynamic*)r8;
	r4 = r5;
	goto label$1878$1;
	label$1878$15:
	r6 = NULL;
	return r6;
}

bool hxd_Charset_isCJK(hxd__Charset r0,int r1) {
	bool r3;
	int r2;
	r2 = 19968;
	if( r1 < r2 ) goto label$1879$8;
	r2 = 40959;
	if( r1 <= r2 ) goto label$1879$6;
	r3 = false;
	goto label$1879$7;
	label$1879$6:
	r3 = true;
	label$1879$7:
	return r3;
	label$1879$8:
	r3 = false;
	return r3;
}

bool hxd_Charset_isSpace(hxd__Charset r0,int r1) {
	bool r3;
	int r2;
	r2 = 32;
	if( r1 == r2 ) goto label$1880$8;
	r2 = 12288;
	if( r1 == r2 ) goto label$1880$6;
	r3 = false;
	goto label$1880$7;
	label$1880$6:
	r3 = true;
	label$1880$7:
	return r3;
	label$1880$8:
	r3 = true;
	return r3;
}

bool hxd_Charset_isBreakChar(hxd__Charset r0,int r1) {
	bool r2;
	r2 = hxd_Charset_isSpace(r0,r1);
	if( r2 ) goto label$1881$4;
	r2 = hxd_Charset_isCJK(r0,r1);
	return r2;
	label$1881$4:
	r2 = true;
	return r2;
}

void hxd_Charset_new(hxd__Charset r0) {
	hxd__Charset r1;
	haxe__ds__IntMap r3;
	vdynamic *r8;
	int r4, r5, r6, r7;
	r1 = r0;
	r3 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
	haxe_ds_IntMap_new(r3);
	r0->map = r3;
	r4 = 0;
	label$1883$5:
	r6 = 94;
	if( r4 >= r6 ) goto label$1883$20;
	r5 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r6 = 65281;
	r6 = r6 + r5;
	r7 = 33;
	r7 = r7 + r5;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r7;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r8));
	goto label$1883$5;
	label$1883$20:
	r4 = 192;
	label$1883$21:
	r6 = 199;
	if( r4 >= r6 ) goto label$1883$33;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 65;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$21;
	label$1883$33:
	r4 = 224;
	label$1883$34:
	r6 = 231;
	if( r4 >= r6 ) goto label$1883$46;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 97;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$34;
	label$1883$46:
	r4 = 200;
	label$1883$47:
	r6 = 204;
	if( r4 >= r6 ) goto label$1883$59;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 69;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$47;
	label$1883$59:
	r4 = 232;
	label$1883$60:
	r6 = 236;
	if( r4 >= r6 ) goto label$1883$72;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 101;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$60;
	label$1883$72:
	r4 = 204;
	label$1883$73:
	r6 = 208;
	if( r4 >= r6 ) goto label$1883$85;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 73;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$73;
	label$1883$85:
	r4 = 236;
	label$1883$86:
	r6 = 240;
	if( r4 >= r6 ) goto label$1883$98;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 105;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$86;
	label$1883$98:
	r4 = 210;
	label$1883$99:
	r6 = 215;
	if( r4 >= r6 ) goto label$1883$111;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 79;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$99;
	label$1883$111:
	r4 = 242;
	label$1883$112:
	r6 = 247;
	if( r4 >= r6 ) goto label$1883$124;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 111;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$112;
	label$1883$124:
	r4 = 217;
	label$1883$125:
	r6 = 221;
	if( r4 >= r6 ) goto label$1883$137;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 85;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$125;
	label$1883$137:
	r4 = 249;
	label$1883$138:
	r6 = 253;
	if( r4 >= r6 ) goto label$1883$150;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r5 = r4;
	++r4;
	r6 = 117;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r6;
	haxe_ds_IntMap_set(r3,r5,((vdynamic*)r8));
	goto label$1883$138;
	label$1883$150:
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 199;
	r5 = 67;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 231;
	r5 = 67;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 208;
	r5 = 68;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 222;
	r5 = 100;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 209;
	r5 = 78;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 241;
	r5 = 110;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 221;
	r5 = 89;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 253;
	r5 = 121;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 255;
	r5 = 121;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8364;
	r5 = 69;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 12288;
	r5 = 32;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 160;
	r5 = 32;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 171;
	r5 = 34;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 187;
	r5 = 34;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8220;
	r5 = 34;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8221;
	r5 = 34;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8216;
	r5 = 39;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8217;
	r5 = 39;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 180;
	r5 = 39;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8216;
	r5 = 39;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8249;
	r5 = 60;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8250;
	r5 = 62;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8211;
	r5 = 45;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r8));
	return;
}

hxd__Charset hxd_Charset_getDefault() {
	hxd__Charset r1;
	hxd__$Charset r2;
	r2 = (hxd__$Charset)global$161;
	r1 = r2->inst;
	if( r1 ) goto label$1882$7;
	r1 = (hxd__Charset)hl_alloc_obj(hxd__Charset__val);
	hxd_Charset_new(r1);
	r2 = (hxd__$Charset)global$161;
	r2->inst = r1;
	label$1882$7:
	r2 = (hxd__$Charset)global$161;
	r1 = r2->inst;
	return r1;
}

