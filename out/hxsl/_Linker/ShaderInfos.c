﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxsl__Linker_ShaderInfos_new(hxsl___Linker__ShaderInfos r0,String r1,vdynamic* r2) {
	hl__types__ArrayObj r8;
	hl_type *r10;
	haxe__ds__IntMap r6;
	hxsl___Linker__$ShaderInfos r3;
	varray *r9;
	int r4, r5;
	r0->name = r1;
	r3 = (hxsl___Linker__$ShaderInfos)global$1371;
	r4 = r3->UID;
	r5 = r4;
	++r4;
	r3->UID = r4;
	r0->uid = r5;
	r0->vertex = r2;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
	haxe_ds_IntMap_new(r6);
	r0->processed = r6;
	r10 = &type$3863;
	r4 = 0;
	r9 = hl_alloc_array(r10,r4);
	r8 = hl_types_ArrayObj_alloc(r9);
	r0->usedFunctions = r8;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
	haxe_ds_IntMap_new(r6);
	r0->read = r6;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
	haxe_ds_IntMap_new(r6);
	r0->write = r6;
	return;
}

