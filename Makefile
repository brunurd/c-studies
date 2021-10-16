# This block is to define the $(RUN_ARGS), the args from the make call.
ifeq (run,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

.PHONY: build
build:
	@./scripts/build.sh

.PHONY: run
run:
	@./scripts/run.sh $(RUN_ARGS)

.PHONY: test
test:
	@./scripts/test.sh
