       global    main
          extern    printf 
main:
	  mov   edi, format	// Loading the address of the format string
	  xor   eax, eax	// Clearing EAX register
	  call  printf		// Calling the printf function
	  mov 	eax, 0		//Set the return value to 0 
	  ret
format: db `Hello, Holberton\n`,0
