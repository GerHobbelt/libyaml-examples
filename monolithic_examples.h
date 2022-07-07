//
// part of Demo 
//

#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int yaml_examples_emit_main(int argc, const char** argv);
int yaml_examples_parse_main(int argc, const char** argv);
int yaml_examples_scan_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
