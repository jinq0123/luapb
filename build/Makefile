# GNU Make workspace makefile autogenerated by Premake

.NOTPARALLEL:

ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

ifeq ($(config),debug)
  luapb_config = debug
endif
ifeq ($(config),release)
  luapb_config = release
endif

PROJECTS := luapb

.PHONY: all clean help $(PROJECTS) 

all: $(PROJECTS)

luapb:
ifneq (,$(luapb_config))
	@echo "==== Building luapb ($(luapb_config)) ===="
	@${MAKE} --no-print-directory -C . -f luapb.make config=$(luapb_config)
endif

clean:
	@${MAKE} --no-print-directory -C . -f luapb.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "  debug"
	@echo "  release"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   luapb"
	@echo ""
	@echo "For more information, see http://industriousone.com/premake/quick-start"