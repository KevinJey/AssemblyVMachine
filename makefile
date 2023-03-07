TARGET:=obj/assvm
OBJS:=main.o
MAIN:=src/main.cpp

$(TARGET):$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

main.o:
	$(CXX) -c $(MAIN)

# clean 
clean:
	$(RM) $(OBJS) $(TARGET)
.PHONY:  clean