﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int format_tools_BitsInput_readBits(format__tools__BitsInput r0,int r1) {
	String r7;
	haxe__io__Input r6;
	int r2, r3, r4, r5, r8;
	r2 = r0->nbits;
	if( r2 < r1 ) goto label$2287$13;
	r2 = r0->nbits;
	r2 = r2 - r1;
	r0->nbits = r2;
	r3 = r0->bits;
	r3 = ((unsigned)r3) >> r2;
	r4 = 1;
	r4 = r4 << r1;
	r5 = 1;
	r4 = r4 - r5;
	r3 = r3 & r4;
	return r3;
	label$2287$13:
	r6 = r0->i;
	if( r6 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r6->$type->vobj_proto[0])(r6);
	r3 = r0->nbits;
	r4 = 24;
	if( r3 < r4 ) goto label$2287$43;
	r4 = 31;
	if( r1 < r4 ) goto label$2287$23;
	r7 = (String)global$378;
	hl_throw((vdynamic*)r7);
	label$2287$23:
	r3 = 8;
	r4 = r0->nbits;
	r3 = r3 + r4;
	r3 = r3 - r1;
	r4 = r0->bits;
	r5 = 1;
	r8 = r0->nbits;
	r5 = r5 << r8;
	r8 = 1;
	r5 = r5 - r8;
	r4 = r4 & r5;
	r8 = 8;
	r8 = r8 - r3;
	r5 = r4 << r8;
	r8 = r2 << r3;
	r5 = r5 | r8;
	r4 = r5;
	r0->bits = r2;
	r0->nbits = r3;
	return r4;
	label$2287$43:
	r3 = r0->bits;
	r4 = 8;
	r3 = r3 << r4;
	r3 = r3 | r2;
	r0->bits = r3;
	r3 = r0->nbits;
	r4 = 8;
	r3 = r3 + r4;
	r0->nbits = r3;
	r3 = format_tools_BitsInput_readBits(r0,r1);
	return r3;
}

bool format_tools_BitsInput_readBit(format__tools__BitsInput r0) {
	bool r4;
	haxe__io__Input r3;
	int r1, r2;
	r1 = r0->nbits;
	r2 = 0;
	if( r1 != r2 ) goto label$2288$9;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r0->bits = r1;
	r1 = 8;
	r0->nbits = r1;
	label$2288$9:
	r1 = r0->nbits;
	--r1;
	r0->nbits = r1;
	r1 = r0->bits;
	r2 = r0->nbits;
	r1 = ((unsigned)r1) >> r2;
	r2 = 1;
	r1 = r1 & r2;
	r2 = 1;
	if( r1 == r2 ) goto label$2288$21;
	r4 = false;
	goto label$2288$22;
	label$2288$21:
	r4 = true;
	label$2288$22:
	return r4;
}

void format_tools_BitsInput_reset(format__tools__BitsInput r0) {
	int r1;
	r1 = 0;
	r0->nbits = r1;
	return;
}

void format_tools_BitsInput_new(format__tools__BitsInput r0,haxe__io__Input r1) {
	int r2;
	r0->i = r1;
	r2 = 0;
	r0->nbits = r2;
	r2 = 0;
	r0->bits = r2;
	return;
}

