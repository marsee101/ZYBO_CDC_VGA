// function (log2, near_power2)
// convenient_functions.vh
//

// Beyond Circuts, Constant Function in Verilog 2001‚ğQÆ‚µ‚Ü‚µ‚½
// http://www.beyond-circuits.com/wordpress/2008/11/constant-functions/
function integer log2;
    input integer addr;
    begin
        addr = addr - 1;
        for (log2=0; addr>0; log2=log2+1)
            addr = addr >> 1;
    end
endfunction

// ˆê”Ô‹ß‚­A‚æ‚è‘å‚«‚¢2‚Ì‚æ‚Ì’l‚ğ•Ô‚·
function integer near_power2;
	input integer num;
	begin
		for (near_power2=2; near_power2<=num; near_power2=near_power2*2);
	end
endfunction
