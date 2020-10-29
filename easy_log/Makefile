helloworld: main.o easy_log.o 
	gcc -o helloworld main.o easy_log.o  
mian.o: main.c easy_log.h
	gcc -c main.c
easy_log.o: easy_log.c easy_log.h
	gcc -c easy_log.c
	
clean:　　　　　　　　　　
	rm helloworld main.o easy_log.o