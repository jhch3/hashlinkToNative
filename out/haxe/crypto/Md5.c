﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

String haxe_crypto_Md5_encode(String r0) {
	String r6;
	haxe__io__Bytes r1;
	vbyte *r4, *r5;
	int r2, r7;
	r2 = 16;
	r1 = haxe_io_Bytes_alloc(r2);
	if( r1 == NULL ) hl_null_access();
	r4 = r1->b;
	if( r0 == NULL ) hl_null_access();
	r5 = r0->bytes;
	r2 = r0->length;
	r7 = 256;
	fmt_digest(r4,r5,r2,r7);
	r6 = haxe_io_Bytes_toHex(r1);
	return r6;
}

