#pragma once

#ifdef _WIN32
#ifdef POLYSCOPE_EXPORTS
#define POLYSCOPE_API __declspec(dllexport)
#else
#define POLYSCOPE_API __declspec(dllimport)
#endif
#else
#define POLYSCOPE_API
#endif