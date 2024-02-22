p2c: p2c_yacc.o p2c_lex.o p2c.o p2c_tree.o 
	gcc -o p2c p2c_lex.o p2c.o p2c_yacc.o p2c_tree.o

debug:
	bison -d --report=all -o p2c_yacc.c p2c_yacc.y

p2c_lex.o: p2c_lex.c p2c.h p2c_yacc.h p2c_tree.h
	gcc -c p2c_lex.c

p2c_lex.c: p2c_lex.l
	flex -op2c_lex.c p2c_lex.l

p2c_yacc.o: p2c_yacc.c p2c.h p2c_yacc.h p2c_tree.h
	gcc -c p2c_yacc.c
	
p2c_yacc.c: p2c_yacc.y
	bison -d -op2c_yacc.c p2c_yacc.y
	
p2c_yacc.h: p2c_yacc.y
	bison -d -op2c_yacc.c p2c_yacc.y
	
p2c_tree.o: p2c_tree.c p2c_tree.h
	gcc -c -o p2c_tree.o p2c_tree.c
	
p2c.o: p2c.c p2c.h p2c_tree.h
	gcc -c p2c.c
	
clean:
	rm *.o p2c p2c_lex.c p2c_yacc.c p2c_yacc.h test?.c test?

test1.c: test1.p
	./pas2c test1.p

test1: test1.c
	gcc -o test1 test1.c

test2.c: test2.p
	./pas2c test2.p

test2: test2.c
	gcc -o test2 test2.c

test3.c: test3.p
	./pas2c test3.p

test3: test3.c
	gcc -o test3 test3.c

test4.c: test4.p
	./pas2c test4.p

test4: test4.c
	gcc -o test4 test4.c

test5.c: test5.p
	./pas2c test5.p

test5: test5.c
	gcc -o test5 test5.c

# hidden rules
.c:	.l
	flex -o$< $@
