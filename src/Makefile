include config.mk

SRC = core/wm.c core/client.c util/util.c
OBJ = $(SRC:.c=.o)
BIN = core/katriawm core/katriac

.PHONY: all clean install installdirs

all: $(BIN)

core/katriawm: core/wm.o util/util.o
	@echo $@
	@$(CC) -o $@ $^ $(LDFLAGS)

core/katriac: core/client.o
	@echo $@
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	@echo $@
	@$(CC) -o $@ -c $(CFLAGS) $(CPPFLAGS) $<

$(OBJ): $(wildcard */*.h) core/config.h core/theme.h

core/theme.h:
	../themes/make_theme_h.sh ../themes/punpun >$@

core/config.h:
	cp core/config.def.h $@

install: all installdirs
	$(INSTALL_PROGRAM) core/katriawm $(DESTDIR)$(bindir)/katriawm
	$(INSTALL_PROGRAM) core/katriac $(DESTDIR)$(bindir)/katriac
	$(INSTALL_DATA) ../doc/man1/katriawm.1 $(DESTDIR)$(man1dir)/katriawm.1
	$(INSTALL_DATA) ../doc/man1/katriac.1 $(DESTDIR)$(man1dir)/katriac.1
	$(INSTALL_DATA) ../doc/man1/katriabi.1 $(DESTDIR)$(man1dir)/katriabi.1

installdirs:
	mkdir -p $(DESTDIR)$(bindir) $(DESTDIR)$(man1dir)

clean:
	rm -f $(OBJ) $(BIN)
