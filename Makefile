TARGETS = grade

.PHONY: $(TARGETS)

grade:
	@-cd prob01 && make build && make test
	@cd prob01 && make grade
	@cp prob01/results.json .