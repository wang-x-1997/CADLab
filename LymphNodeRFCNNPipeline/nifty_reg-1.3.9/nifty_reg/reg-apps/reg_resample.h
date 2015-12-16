/**
 * @file reg_resample.h
 * @author Marc Modat
 * @date 26/06/2012
 * @brief Header file that contains the string to be returned
 * for the slicer extension of reg_resample
 *
 * Created by Marc Modat on 26/06/2012.
 * Copyright (c) 2012, University College London. All rights reserved.
 * Centre for Medical Image Computing (CMIC)
 * See the LICENSE.txt file in the nifty_reg root folder
 *
 */

char xml_resample[] =
"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
"<executable>\n"
"  <category>Registration.NiftyReg</category>\n"
"  <title>RegResample (NiftyReg)</title>\n"
"  <description><![CDATA[NiftyReg module for resampling using input transformation]]></description>\n"
"  <version>0.0.1</version>\n"
"  <documentation-url> TODO</documentation-url>\n"
"  <license>BSD</license>\n"
"  <contributor>Marc Modat (UCL)</contributor>\n"
"  <parameters advanced=\"false\">\n"
"    <label>Input images. Reference and floating images are mandatory</label>\n"
"    <description>Input images</description>\n"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>referenceImageName</name>\n"
"      <description>Reference image filename (also called Target of Fixed)</description>\n"
"      <label>Reference image</label>\n"
"      <default>required</default>\n"
"      <longflag>ref</longflag>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>floatingImageName</name>\n"
"      <description>Floating image filename (also called Source of moving)</description>\n"
"      <label>Floating image</label>\n"
"      <default>required</default>\n"
"      <longflag>flo</longflag>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
"  </parameters>\n"
"  <parameters advanced=\"false\">\n"
"    <label>Input transformation. Identity transformation is used by default.</label>\n"
"    <description>Input transformation generated by a NiftyReg module or executable</description>\n"
"    <file fileExtensions=\".txt\">\n"
"      <name>affineTransformation</name>\n"
"      <description>Input affine transformation</description>\n"
"      <label>Affine trans.</label>\n"
"      <default></default>\n"
"      <longflag>aff</longflag>\n"
"      <channel>input</channel>\n"
"    </file>\n"
"    <file fileExtensions=\".nii,.nii.gz,.nrrd\">\n"
//"    <image>"
"      <name>CPP_image</name>\n"
"      <description>Control point position grid image</description>\n"
"      <label>CPP image</label>\n"
"      <default></default>\n"
"      <longflag>cpp</longflag>\n"
"      <channel>input</channel>\n"
"    </file>\n"
//"    </image>"
"    <file fileExtensions=\".nii,.nii.gz,.nrrd\">\n"
//"    <image>"
"      <name>DEF_image</name>\n"
"      <description>Deformation field image</description>\n"
"      <label>DEF image</label>\n"
"      <default></default>\n"
"      <longflag>def</longflag>\n"
"      <channel>input</channel>\n"
"    </file>\n"
//"    </image>"
"  </parameters>\n"
"  <parameters advanced=\"false\">\n"
"    <label>Output image</label>\n"
"    <description>Resampled images using the provided transformation</description>\n"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>warpedImage</name>\n"
"      <description>Warped floating image</description>\n"
"      <label>Warped image</label>\n"
"      <default></default>\n"
"      <longflag>res</longflag>\n"
"      <channel>output</channel>\n"
//"    </file>\n"
"    </image>"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>warpedGrid</name>\n"
"      <description>Warped blank grid image</description>\n"
"      <label>Grid image</label>\n"
"      <default></default>\n"
"      <longflag>blank</longflag>\n"
"      <channel>output</channel>\n"
//"    </file>\n"
"    </image>"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Interpolation type</label>\n"
"    <description>Type of interpolation method used to resample the floating image</description>\n"
"    <integer-enumeration>\n"
"      <name>interpolation</name>\n"
"      <description>Interpolation order to use to warp the floating image</description>\n"
"      <label>Interpolation order</label>\n"
"      <default>3</default>\n"
"      <longflag>inter</longflag>\n"
"      <channel>input</channel>\n"
"      <element>0</element>\n"
"      <element>1</element>\n"
"      <element>3</element>\n"
"    </integer-enumeration>\n"
"  </parameters>\n"
"</executable>"
;