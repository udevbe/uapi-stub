uapistub = library(
    'uapi',
    sources: [ 'stub.c' ],
    version: '1.0',
    install: true,
    include_directories: uapistub_inc,
)

pkg = import('pkgconfig')
pkg.generate(
    libraries: uapistub,
    name: 'uapi',
    description: 'uapi headers.',
    version: meson.project_version(),
    filebase: 'uapi'
)
