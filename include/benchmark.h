#ifndef CCA_BENCHMARK_H_
#define CCA_BENCHMARK_H_

#define STR(s) #s
#define CCA_MARKER(marker) __asm__ volatile("MOV XZR, " STR(marker))

#define BENCH_LKVM_CPU_EXIT_UNKNOWN() CCA_MARKER(0x201)
#define BENCH_LKVM_CPU_EXIT_DEBUG() CCA_MARKER(0x202)
#define BENCH_LKVM_CPU_EXIT_IO() CCA_MARKER(0x203)
#define BENCH_LKVM_CPU_EXIT_MMIO() CCA_MARKER(0x204)
#define BENCH_LKVM_CPU_EXIT_INTR() CCA_MARKER(0x205)
#define BENCH_LKVM_CPU_EXIT_SHUTDOWN() CCA_MARKER(0x206)
#define BENCH_LKVM_CPU_EXIT_SYSTEM_EVENT() CCA_MARKER(0x207)
#define BENCH_LKVM_CPU_EXIT_UNHANDLED() CCA_MARKER(0x208)



#endif

