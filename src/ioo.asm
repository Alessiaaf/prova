

	public start    ;Make the entry point public
	org $2000       ;Place the origin at $2000


start:
	move #0, d0
	
	move #0, d1
	move #1, d2
	
	move #5, d1
	
	for_begin:
	tst  d1
	ble  for_end
	add #1, d0
	sub d2, d1
	add #2, d2
	
	bra for_begin
	
		
	for_ende:
	

    end 