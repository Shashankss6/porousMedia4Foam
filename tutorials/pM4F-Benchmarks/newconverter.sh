#!/bin/bash

# Convert EPS files to PDF
for file in *.eps; do
	    gs -sDEVICE=pdfwrite -o "${file%.eps}.pdf" "$file"
    done

    


