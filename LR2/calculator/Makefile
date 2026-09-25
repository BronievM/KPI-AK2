CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp calculator.cpp calculator.h
OBJDIR=MakeCompiled
OBJECTS=$(SOURCES:$(OBJDIR)/%.cpp=.o)
EXECUTABLE=$(OBJDIR)/calc
LIB = $(OBJDIR)/libcalc.a
	
all: $(OBJDIR) $(LIB) $(SOURCES) $(EXECUTABLE)
	@rm -f $(OBJDIR)/*.o 

$(OBJDIR):
	mkdir -p $(OBJDIR)
	
$(OBJDIR)/%.o: %.cpp calculator.h | $(OBJDIR)
	$(CC) $(CFLAGS) $< -o $@

$(LIB): $(OBJDIR)/calculator.o
	ar rcs $@ $<

$(EXECUTABLE): $(OBJDIR)/main.o $(LIB)
	$(CC) $(OBJDIR)/main.o -L$(OBJDIR) -lcalc -o $@		
	
clean:
	rm -rf $(OBJDIR)