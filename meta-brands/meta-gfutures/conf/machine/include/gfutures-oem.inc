# We know about rtc
include conf/machine/include/build-extras.inc

BRAND_OEM = "gfutures"

MACHINE_NAME = "\
${@bb.utils.contains('MACHINEBUILD', 'mutant1100', 'HD1100' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1265', 'HD1265' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1500', 'HD1500' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant500c', 'HD500C' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant530c', 'HD530C' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1200', 'HD1200' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vizyonvita', 'Vita' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant11', 'HD11' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant51', 'HD51' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant60', 'HD60' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant61', 'HD61' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax51', 'HD51' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax60', 'HD60' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'bre2ze4k', 'BRE2ZE 4K' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'axultra', 'HD51 ultra' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1000', 'VS1000' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1500', 'VS1500' , '', d)}\
"

MACHINE_BRAND = "\
${@bb.utils.contains('MACHINEBUILD', 'mutant1100', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1265', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1500', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant500c', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant530c', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1200', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vizyonvita', 'Vizyon' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant11', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant51', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant60', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant61', 'Mut@nt' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax51', 'AX 4K' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax60', 'AX 4KBOX' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'bre2ze4k', 'WWIO' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'axultra', 'AX 4K' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1000', 'Vimastec' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1500', 'Vimastec' , '', d)}\
"

IMAGEDIR ?= "\
${@bb.utils.contains('MACHINEBUILD', 'mutant1100', 'hd1100' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1265', 'hd1265' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1500', 'hd1500' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant500c', 'hd500c' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant530c', 'hd530c' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1200', 'hd1200' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vizyonvita', 'hd1100' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant11', 'hd11' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant51', 'hd51' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant60', 'hd60' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant61', 'hd61' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax51', 'hd51' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax60', 'hd60' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'bre2ze4k', 'bre2ze4k' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'axultra', 'axultra' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1000', 'vs1000' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1500', 'vs1500' , '', d)}\
"

MACHINE_DRIVER ?= "\
${@bb.utils.contains('MACHINEBUILD', 'mutant1100', 'hd1100' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1265', 'hd1265' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1500', 'hd1500' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant500c', 'hd500c' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant530c', 'hd530c' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant1200', 'hd1200' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vizyonvita', 'hd1100' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant11', 'hd11' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant51', 'hd51' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant60', 'hd60' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'mutant61', 'hd61' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax51', 'hd51' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'ax60', 'hd60' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'bre2ze4k', 'bre2ze4k' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'axultra', 'axultra' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1000', 'vs1000' , '', d)}\
${@bb.utils.contains('MACHINEBUILD', 'vimastec1500', 'vs1500' , '', d)}\
"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    gfutures-dvb-modules-${MACHINE_DRIVER} \
    "

DVBPROVIDER = "kernel"
DVBSKYPROVIDER = "kernel"

MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += "\
    kernel-module-cdfs \
    ${@bb.utils.contains('MACHINE_FEATURES', 'qtegls', 'hd-qteglfs-platform', '',d)} \
    ${@bb.utils.contains('MACHINE_FEATURES', 'swap', 'hd-swapcreate', '',d)} \
    ${@bb.utils.contains('MACHINE_FEATURES', 'gfwol', 'gfutures-ethwol' , '', d)} \
    "

MACHINE_EXTRA_RRECOMMENDS += " \
    gstreamer1.0-plugin-dvbmediasink \
    ${@bb.utils.contains('MACHINE_FEATURES', 'hisil', 'ffmpeg gstreamer1.0-libav' , 'gstreamer1.0-libav ', d)} \
    "

include conf/machine/include/autoload-filesystems.inc
require conf/machine/include/soc-family.inc
require conf/machine/box-hardware.inc

DVBMEDIASINK_CONFIG = "--with-wma --with-wmv --with-pcm --with-dts --with-eac3 \
    ${@bb.utils.contains('MACHINEBUILD', 'mutant1265', '--with-h265 --with-vb6 --with-vb8 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINEBUILD', 'mutant1500', '--with-h265 --with-vb6 --with-vb8 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINEBUILD', 'mutant11', '--with-h265 --with-vb6 --with-vb8 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINE', 'hd530c', '--with-h265 --with-vb6 --with-vb8 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINE', 'hd51', '--with-h265 --with-vb6 --with-vb8 --with-vb9 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINE', 'vs1500', '--with-h265 --with-vb6 --with-vb8 --with-vb9 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINE', 'vs1000', '--with-h265 --with-vb6 --with-vb8  --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINE', 'hd60', '--with-h265 --with-vb6 --with-vb8 --with-vb9 --with-spark' , '', d)} \
    ${@bb.utils.contains('MACHINE', 'hd61', '--with-h265 --with-vb6 --with-vb8 --with-vb9 --with-spark' , '', d)} \
"

PREFERRED_PROVIDER_virtual/kernel = "linux-gfutures"
PREFERRED_PROVIDER_virtual/kodi = "stb-kodi-${MACHINE}"

MACHINE_FEATURES += "3dtv alsa hdmicec switchoff blindscan-tbs HDMI"

EXTRA_IMAGEDEPENDS += " \
    enigma2-plugin-systemplugins-remotecontrolcode \
    "

MACHINE_EXTRA_RDEPENDS_${PN} = " \
    enigma2-plugin-systemplugins-remotecontrolcode \
    "

OEM_ARCH = "${MACHINEBUILD}"

# Add "MACHINEBUILD" override for recipes
MACHINEOVERRIDES =. "${@['', '${MACHINEBUILD}:']['${MACHINEBUILD}' != '']}"
