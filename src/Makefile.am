bin_PROGRAMS = eleet
eleet_SOURCES = eleet.c eleet_timers.c eleet_textures.c eleet_fonts.c \
eleet.h eleet_random.c \
models/misc_asteroid.c \
models/misc_boulder.c \
models/misc_cargo.c \
models/misc_missile.c \
models/ship_adder.c \
models/ship_anaconda_arc.c \
models/ship_anaconda.c \
models/ship_asp.c \
models/ship_aspmk2.c \
models/ship_boa.c \
models/ship_boamk2.c \
models/ship_bushmaster.c \
models/ship_caiman.c \
models/ship_cobrafs.c \
models/ship_cobramk1_arc.c \
models/ship_cobramk1.c \
models/ship_cobramk3_arc.c \
models/ship_constrictor_arc.c \
models/ship_constrictor.c \
models/ship_coriolis_arc.c \
models/ship_coriolis.c \
models/ship_delta.c \
models/ship_dodec.c \
models/ship_drake.c \
models/ship_escapepod.c \
models/ship_ferdelance_arc.c \
models/ship_ferdelance.c \
models/ship_gecko_arc.c \
models/ship_gecko.c \
models/ship_gnat.c \
models/ship_griffin.c \
models/ship_hawk.c \
models/ship_hognose.c \
models/ship_krait.c \
models/ship_mamba_arc.c \
models/ship_mamba.c \
models/ship_moccasin.c \
models/ship_moray_arc.c \
models/ship_moray.c \
models/ship_python_arc.c \
models/ship_python.c \
models/ship_racer.c \
models/ship_remlock.c \
models/ship_shuttle.c \
models/ship_sidewinder.c \
models/ship_tharglet.c \
models/ship_thargoid.c \
models/ship_thargon.c \
models/ship_transporter.c \
models/ship_urutu.c \
models/ship_viper.c \
models/ship_worm.c \
models/ship_zarch.c

eleet_LDFLAGS = @LDFLAGS@
eleet_CPPFLAGS = $(all_includes) @SDL_CFLAGS@ @X_CFLAGS@ @GLU_CFLAGS@ @GL_CFLAGS@
eleet_LDADD = @SDL_LIBS@ @X_PRE_LIBS@ @X_LIBS@ @X_EXTRA_LIBS@ @GLU_LIBS@ @GL_LIBS@

install-exec-hook:
	if test "@GNOMESAVER@" = "yes" ; then \
	if test -d "$(DESTDIR)@GNOME_LNK_DIR@"; then echo "OK"; else $(MKDIR_P) "$(DESTDIR)@GNOME_LNK_DIR@"; fi; \
	cd "$(DESTDIR)@GNOME_LNK_DIR@"; \
	if test -e eleet$(EXEEXT); then rm -f eleet$(EXEEXT); else echo "OK"; fi; \
	$(LN_S) $(DESTDIR)$(bindir)/eleet$(EXEEXT) eleet$(EXEEXT); \
	fi;
