﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool dx_Loop_processEvents(vclosure* r0) {
	bool r1, r6;
	dx__$Loop r4;
	dx__Event r3;
	int r2, r5;
	label$2186$0:
	r1 = true;
	if( !r1 ) goto label$2186$12;
	r1 = false;
	r2 = ui_ui_loop(r1);
	switch(r2) {
		default:
			goto label$2186$11;
		case 0:
			goto label$2186$12;
		case 1:
			goto label$2186$0;
		case 2:
			r1 = false;
			return r1;
	}
	label$2186$11:
	goto label$2186$0;
	label$2186$12:
	r4 = (dx__$Loop)global$238;
	r3 = r4->event;
	r1 = dx_Loop_eventLoop(r3);
	if( !r1 ) goto label$2186$31;
	if( r0 == NULL ) hl_null_access();
	r4 = (dx__$Loop)global$238;
	r3 = r4->event;
	r1 = r0->hasValue ? ((bool (*)(vdynamic*,dx__Event))r0->fun)((vdynamic*)r0->value,r3) : ((bool (*)(dx__Event))r0->fun)(r3);
	r4 = (dx__$Loop)global$238;
	r3 = r4->event;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->type;
	r5 = 0;
	if( r2 != r5 ) goto label$2186$30;
	if( !r1 ) goto label$2186$30;
	r6 = false;
	return r6;
	label$2186$30:
	goto label$2186$12;
	label$2186$31:
	r1 = true;
	return r1;
}

bool dx_Loop_eventLoop(dx__Event r0) {
	hl__types__ArrayObj r2;
	bool r6;
	dx__$Window r3;
	dx__Window r7;
	vdynamic *r8;
	varray *r9;
	int r1, r4, r5;
	r1 = 0;
	r3 = (dx__$Window)global$33;
	r2 = r3->windows;
	label$2185$3:
	if( r2 == NULL ) hl_null_access();
	r5 = r2->length;
	if( r1 >= r5 ) goto label$2185$22;
	r4 = r1;
	++r1;
	r5 = r2->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$2185$13;
	r7 = NULL;
	goto label$2185$16;
	label$2185$13:
	r9 = r2->array;
	r8 = ((vdynamic**)(r9 + 1))[r4];
	r7 = (dx__Window)r8;
	label$2185$16:
	if( r7 == NULL ) hl_null_access();
	r6 = dx_Window_getNextEvent(r7,r0);
	if( !r6 ) goto label$2185$21;
	r6 = true;
	return r6;
	label$2185$21:
	goto label$2185$3;
	label$2185$22:
	r6 = false;
	return r6;
}

