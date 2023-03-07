TARGET:=test
OBJS:=test.o
LIBS:=-lpthread

$(TARGET):$(OBJS)
	$(CXX) -o test $(OBJS) $(LIBS)

# clean 
clean:
	$(RM) $(OBJS) $(TARGET)
.PHONY:  clean