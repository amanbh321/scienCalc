FROM gcc:13
WORKDIR /app
COPY src/calc.cpp .
RUN g++ calc.cpp -o calc
CMD ["./calc"]