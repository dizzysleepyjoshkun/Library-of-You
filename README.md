# Library-of-You

this is a gift I made on valentine's day for a girl i loved. it is essentially a database of works of romantic writing that is accessed using conditional statements. it is extremely rudimentary, and there may be bugs in how things are exited. if you have any solutions to them, let me know however you like whether it be some way github has or via social media if you know me. if you want to make it very complex, be careful because the nested conditionals can get long, so streamline it however you like. to compile, use the following in the terminal when you cd into the file:

g++ libraryofyou.cpp -o libraryofyou

it should form as an executable assuming you have g++, but if your system uses some other compiler you can use that instead. you can open it using ./libraryofyou, or just open it by clicking the icon that forms and making it execute in your terminal.

for the secret phase, you can do whatever puzzle you lke to make it a challenge. i did an assembly bomb defusing exercise for the number 27:

0000000000401480 <phase_1>:

  401480:	53                   	push   %rbx
  
  401481:	48 89 fb            	mov    %rdi,%rbx 
  
  401484:	80 7f 01 00          	cmpb   $0x0,0x1(%rdi) 
  
  401488:	75 07                	jne    401491 <phase_1+0x11> 
  
  40148a:	80 3b 32             	cmpb   $0x32, (%rbx) 
  
  40148d:	75 09                	jne    401498 <phase_1+0x18> 
  
  40148f:	80 3b 37             	cmpb   $0x37, 0x1(%rbx)
  
  401492:	75 04                	jne    401498 <phase_1+0x18> 
  
  401494:	5b                   	pop    %rbx
  
  401495:	c3                   	retq   
  
  401498:	e8 f8 07 00 00       	callq  401c8e <explode_bomb>
  
  40149d:	eb f2                	jmp    40148a <phase_1+0xa>
