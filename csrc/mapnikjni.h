/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mapnik_Parameters */

#ifndef _Included_mapnik_Parameters
#define _Included_mapnik_Parameters
#ifdef __cplusplus
extern "C" {
#endif
#undef mapnik_Parameters_DEFAULT_INITIAL_CAPACITY
#define mapnik_Parameters_DEFAULT_INITIAL_CAPACITY 16L
#undef mapnik_Parameters_MAXIMUM_CAPACITY
#define mapnik_Parameters_MAXIMUM_CAPACITY 1073741824L
#undef mapnik_Parameters_DEFAULT_LOAD_FACTOR
#define mapnik_Parameters_DEFAULT_LOAD_FACTOR 0.75f
#undef mapnik_Parameters_serialVersionUID
#define mapnik_Parameters_serialVersionUID 362498820763181265LL
/*
 * Class:     mapnik_Parameters
 * Method:    setNativeInt
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_mapnik_Parameters_setNativeInt
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     mapnik_Parameters
 * Method:    setNativeString
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Parameters_setNativeString
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     mapnik_Parameters
 * Method:    setNativeDouble
 * Signature: (JLjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_mapnik_Parameters_setNativeDouble
  (JNIEnv *, jclass, jlong, jstring, jdouble);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Mapnik */

#ifndef _Included_mapnik_Mapnik
#define _Included_mapnik_Mapnik
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Mapnik
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mapnik_Mapnik_nativeInit
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Map */

#ifndef _Included_mapnik_Map
#define _Included_mapnik_Map
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Map
 * Method:    alloc
 * Signature: (IILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Map_alloc__IILjava_lang_String_2
  (JNIEnv *, jclass, jint, jint, jstring);

/*
 * Class:     mapnik_Map
 * Method:    alloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Map_alloc__
  (JNIEnv *, jclass);

/*
 * Class:     mapnik_Map
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_Map
 * Method:    loadMap
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_loadMap
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     mapnik_Map
 * Method:    loadMapString
 * Signature: (Ljava/lang/String;ZLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_loadMapString
  (JNIEnv *, jobject, jstring, jboolean, jstring);

/*
 * Class:     mapnik_Map
 * Method:    getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Map_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Map_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    setWidth
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setWidth
  (JNIEnv *, jobject, jint);

/*
 * Class:     mapnik_Map
 * Method:    setHeight
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setHeight
  (JNIEnv *, jobject, jint);

/*
 * Class:     mapnik_Map
 * Method:    resize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_resize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     mapnik_Map
 * Method:    getSrs
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Map_getSrs
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    setSrs
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setSrs
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Map
 * Method:    setBufferSize
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setBufferSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     mapnik_Map
 * Method:    getBufferSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Map_getBufferSize
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getBasePath
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Map_getBasePath
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    setBasePath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setBasePath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Map
 * Method:    getLayerCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Map_getLayerCount
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getLayer
 * Signature: (I)Lmapnik/Layer;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getLayer
  (JNIEnv *, jobject, jint);

/*
 * Class:     mapnik_Map
 * Method:    setLayer
 * Signature: (ILmapnik/Layer;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setLayer
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     mapnik_Map
 * Method:    removeLayer
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_removeLayer
  (JNIEnv *, jobject, jint);

/*
 * Class:     mapnik_Map
 * Method:    removeAllLayers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_removeAllLayers
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    addLayer
 * Signature: (Lmapnik/Layer;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_addLayer
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getStyleNames
 * Signature: ()Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getStyleNames
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getStyle
 * Signature: (Ljava/lang/String;)Lmapnik/FeatureTypeStyle;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getStyle
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Map
 * Method:    addStyle
 * Signature: (Ljava/lang/String;Lmapnik/FeatureTypeStyle;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_addStyle
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     mapnik_Map
 * Method:    removeStyle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_removeStyle
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Map
 * Method:    getMaximumExtent
 * Signature: ()Lmapnik/Box2d;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getMaximumExtent
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    setMaximumExtent
 * Signature: (Lmapnik/Box2d;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setMaximumExtent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getCurrentExtent
 * Signature: ()Lmapnik/Box2d;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getCurrentExtent
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getBufferedExtent
 * Signature: ()Lmapnik/Box2d;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getBufferedExtent
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    zoom
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_zoom
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     mapnik_Map
 * Method:    zoomToBox
 * Signature: (Lmapnik/Box2d;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_zoomToBox
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Map
 * Method:    zoomAll
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_zoomAll
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    pan
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_pan
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     mapnik_Map
 * Method:    panAndZoom
 * Signature: (IID)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_panAndZoom
  (JNIEnv *, jobject, jint, jint, jdouble);

/*
 * Class:     mapnik_Map
 * Method:    getScale
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mapnik_Map_getScale
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getScaleDenominator
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mapnik_Map_getScaleDenominator
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getBackground
 * Signature: ()Lmapnik/Color;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Map_getBackground
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    setBackground
 * Signature: (Lmapnik/Color;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setBackground
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Map
 * Method:    getBackgroundImage
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Map_getBackgroundImage
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Map
 * Method:    setBackgroundImage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_setBackgroundImage
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Map
 * Method:    saveMapToFile
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_mapnik_Map_saveMapToFile
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     mapnik_Map
 * Method:    saveMapToBuffer
 * Signature: (Z)[B
 */
JNIEXPORT jbyteArray JNICALL Java_mapnik_Map_saveMapToBuffer
  (JNIEnv *, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Layer */

#ifndef _Included_mapnik_Layer
#define _Included_mapnik_Layer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Layer
 * Method:    alloc
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Layer_alloc
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     mapnik_Layer
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_Layer
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Layer_getName
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Layer
 * Method:    getTitle
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Layer_getTitle
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setTitle
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Layer
 * Method:    getAbstract
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Layer_getAbstract
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setAbstract
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setAbstract
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Layer
 * Method:    getSrs
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Layer_getSrs
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setSrs
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setSrs
  (JNIEnv *, jobject, jstring);

/*
 * Class:     mapnik_Layer
 * Method:    getStyles
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_mapnik_Layer_getStyles
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setStyles
 * Signature: ([Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setStyles
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     mapnik_Layer
 * Method:    getMinZoom
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mapnik_Layer_getMinZoom
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setMinZoom
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setMinZoom
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     mapnik_Layer
 * Method:    getMaxZoom
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mapnik_Layer_getMaxZoom
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setMaxZoom
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setMaxZoom
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     mapnik_Layer
 * Method:    isActive
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mapnik_Layer_isActive
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setActive
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setActive
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mapnik_Layer
 * Method:    isQueryable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mapnik_Layer_isQueryable
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setQueryable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setQueryable
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mapnik_Layer
 * Method:    isVisible
 * Signature: (D)Z
 */
JNIEXPORT jboolean JNICALL Java_mapnik_Layer_isVisible
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     mapnik_Layer
 * Method:    isClearLabelCache
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mapnik_Layer_isClearLabelCache
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setClearLabelCache
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setClearLabelCache
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mapnik_Layer
 * Method:    isCacheFeatures
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mapnik_Layer_isCacheFeatures
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setCacheFeatures
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setCacheFeatures
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mapnik_Layer
 * Method:    getDatasource
 * Signature: ()Lmapnik/Datasource;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Layer_getDatasource
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Layer
 * Method:    setDatasource
 * Signature: (Lmapnik/Datasource;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Layer_setDatasource
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_FeatureTypeStyle */

#ifndef _Included_mapnik_FeatureTypeStyle
#define _Included_mapnik_FeatureTypeStyle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_FeatureTypeStyle
 * Method:    alloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_mapnik_FeatureTypeStyle_alloc
  (JNIEnv *, jclass);

/*
 * Class:     mapnik_FeatureTypeStyle
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_FeatureTypeStyle_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_FeatureTypeStyle
 * Method:    collectAttributes
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_mapnik_FeatureTypeStyle_collectAttributes
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Datasource */

#ifndef _Included_mapnik_Datasource
#define _Included_mapnik_Datasource
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Datasource
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_Datasource_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_Datasource
 * Method:    getParameters
 * Signature: ()Lmapnik/Parameters;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Datasource_getParameters
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Datasource
 * Method:    getType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Datasource_getType
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Datasource
 * Method:    bind
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mapnik_Datasource_bind
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Datasource
 * Method:    getEnvelope
 * Signature: ()Lmapnik/Box2d;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Datasource_getEnvelope
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Datasource
 * Method:    features
 * Signature: (Lmapnik/Query;)Lmapnik/FeatureSet;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Datasource_features
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Datasource
 * Method:    featuresAtPoint
 * Signature: (Lmapnik/Coord;)Lmapnik/FeatureSet;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Datasource_featuresAtPoint
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Datasource
 * Method:    getDescriptor
 * Signature: ()Lmapnik/LayerDescriptor;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Datasource_getDescriptor
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_DatasourceCache */

#ifndef _Included_mapnik_DatasourceCache
#define _Included_mapnik_DatasourceCache
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_DatasourceCache
 * Method:    pluginNames
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_mapnik_DatasourceCache_pluginNames
  (JNIEnv *, jclass);

/*
 * Class:     mapnik_DatasourceCache
 * Method:    pluginDirectories
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_DatasourceCache_pluginDirectories
  (JNIEnv *, jclass);

/*
 * Class:     mapnik_DatasourceCache
 * Method:    registerDatasources
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_DatasourceCache_registerDatasources
  (JNIEnv *, jclass, jstring);

/*
 * Class:     mapnik_DatasourceCache
 * Method:    create
 * Signature: (Lmapnik/Parameters;Z)Lmapnik/Datasource;
 */
JNIEXPORT jobject JNICALL Java_mapnik_DatasourceCache_create
  (JNIEnv *, jclass, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Projection */

#ifndef _Included_mapnik_Projection
#define _Included_mapnik_Projection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Projection
 * Method:    alloc
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Projection_alloc
  (JNIEnv *, jclass, jstring);

/*
 * Class:     mapnik_Projection
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_Projection_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_Projection
 * Method:    getParams
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Projection_getParams
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Projection
 * Method:    getExpanded
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mapnik_Projection_getExpanded
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Projection
 * Method:    forward
 * Signature: (Lmapnik/Coord;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Projection_forward
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mapnik_Projection
 * Method:    inverse
 * Signature: (Lmapnik/Coord;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Projection_inverse
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Query */

#ifndef _Included_mapnik_Query
#define _Included_mapnik_Query
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Query
 * Method:    alloc
 * Signature: (Lmapnik/Box2d;DDD)J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Query_alloc
  (JNIEnv *, jclass, jobject, jdouble, jdouble, jdouble);

/*
 * Class:     mapnik_Query
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_Query_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_Query
 * Method:    addPropertyName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Query_addPropertyName
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_FeatureSet */

#ifndef _Included_mapnik_FeatureSet
#define _Included_mapnik_FeatureSet
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_FeatureSet
 * Method:    dealloc
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_mapnik_FeatureSet_dealloc
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     mapnik_FeatureSet
 * Method:    _next
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mapnik_FeatureSet__1next
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_FeatureSet
 * Method:    _loadGeometries
 * Signature: ()[Lmapnik/Geometry;
 */
JNIEXPORT jobjectArray JNICALL Java_mapnik_FeatureSet__1loadGeometries
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_FeatureSet
 * Method:    getId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_FeatureSet_getId
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_FeatureSet
 * Method:    getEnvelope
 * Signature: ()Lmapnik/Box2d;
 */
JNIEXPORT jobject JNICALL Java_mapnik_FeatureSet_getEnvelope
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_FeatureSet
 * Method:    getPropertyNames
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_mapnik_FeatureSet_getPropertyNames
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_FeatureSet
 * Method:    getProperty
 * Signature: (Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_mapnik_FeatureSet_getProperty
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Geometry */

#ifndef _Included_mapnik_Geometry
#define _Included_mapnik_Geometry
#ifdef __cplusplus
extern "C" {
#endif
#undef mapnik_Geometry_TYPE_POINT
#define mapnik_Geometry_TYPE_POINT 1L
#undef mapnik_Geometry_TYPE_LINESTRING
#define mapnik_Geometry_TYPE_LINESTRING 2L
#undef mapnik_Geometry_TYPE_POLYGON
#define mapnik_Geometry_TYPE_POLYGON 3L
#undef mapnik_Geometry_TYPE_MULTIPOINT
#define mapnik_Geometry_TYPE_MULTIPOINT 4L
#undef mapnik_Geometry_TYPE_MULTILINESTRING
#define mapnik_Geometry_TYPE_MULTILINESTRING 5L
#undef mapnik_Geometry_TYPE_MULTIPOLYGON
#define mapnik_Geometry_TYPE_MULTIPOLYGON 6L
/*
 * Class:     mapnik_Geometry
 * Method:    getType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Geometry_getType
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Geometry
 * Method:    getNumPoints
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Geometry_getNumPoints
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Geometry
 * Method:    getVertex
 * Signature: (ILmapnik/Coord;)I
 */
JNIEXPORT jint JNICALL Java_mapnik_Geometry_getVertex
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     mapnik_Geometry
 * Method:    getEnvelope
 * Signature: ()Lmapnik/Box2d;
 */
JNIEXPORT jobject JNICALL Java_mapnik_Geometry_getEnvelope
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Image */

#ifndef _Included_mapnik_Image
#define _Included_mapnik_Image
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Image
 * Method:    alloc
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Image_alloc__II
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mapnik_Image
 * Method:    alloc
 * Signature: (Lmapnik/Image;)J
 */
JNIEXPORT jlong JNICALL Java_mapnik_Image_alloc__Lmapnik_Image_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     mapnik_Image
 * Method:    dealloc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mapnik_Image_dealloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mapnik_Image
 * Method:    getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Image_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Image
 * Method:    getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mapnik_Image_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     mapnik_Image
 * Method:    saveToFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Image_saveToFile
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class mapnik_Renderer */

#ifndef _Included_mapnik_Renderer
#define _Included_mapnik_Renderer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mapnik_Renderer
 * Method:    renderAgg
 * Signature: (Lmapnik/Map;Lmapnik/Image;)V
 */
JNIEXPORT void JNICALL Java_mapnik_Renderer_renderAgg
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
