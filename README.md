# CCTRACK with PF_RING 9.3.0

This is an updated version of the [original cctrack](https://github.com/diekmann/cctrack) developed by Lothar Braun, Cornelius Diekmann, Nils Kammenhuber, and Georg Carle.

The main modifications were:
- Implementing it with PF_RING 9.3.0, the latest version as of June 2026. This required redoing the changes done to the `pf_ring.c` file in a similar way as the original atuhors did with PF_RING 4.7.1.
- Fixing any issues between kernel 2.4.0-2.6.0 and kernel 6.8.0 in terms of types, functions and libraries. This was done on the original cctrack code that is in `code/PF_RING-9.3.0/kernel/plugins/`

## Repo strucure

Similar to the original code, the file structure follows the PF_RING source code. The cctrack plugins is in `code/kernel/plugin/` and contains all of the original files and licenses, and the only changes are the ones described above.

## Quick Start

Enter the `code/` folder and read the README files for more infomration, but in summary, you need to execute the following steps:
- Compile with: `make`
- Install it with: `sudo make install`
- Insert the PF_RING module: `sudo insmod pf_ring.ko`
- Insert the cctrack module: `sudo insmod ctrack_plugin.ko`

These steps leave cctrack ready to use. To actually use cctrack with the desired interface you need to  call PF_RING through its API. 
This involves openning the interface with `pfring_open(...)` and later installing a PF_RING rule where all packets go through the cctrack plugin with the function `pfring_add_filtering_rule`.

The [code used for our experiments with cctrack](https://github.com/daisyfbk/Dynamic-Per-Flow-Sampling-for-Signature-based-NIDS) contains the necessary code to integrate it with Suricata.